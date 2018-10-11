#include "apriorittask.h"

bool AprioritTask::setField(size_t m, size_t n)
{
    if (m == 0 || n == 0 || m > 1000000000 || n > 1000000000) {
        return false;
    }

    for (size_t k = 0; k < n; ++k) {
        std::vector<char> vJ(m, 'f');
        vI.push_back(vJ);
    }

    return true;
}

bool AprioritTask::addDataInLine(size_t n, size_t c1, size_t c2)
{
    if (n > vI.size() || n < 1) {
        return false;
    }
    else {
        if (!setLine(vI[n - 1], c1, c2)) return false;
    }
    return true;
}

bool AprioritTask::setLine(std::vector<char> &v, size_t c1, size_t c2)
{
    if (c1 > v.size() || c1 < 1 || c2 > v.size() || c2 < 1 || c2 < c1) {
        return false;
    }
    else {
        std::fill(v.begin() + (c1 - 1), v.end() - (v.size() - c2), 't');
    }

    return true;
}

int AprioritTask::getLampsCount()
{
    int count = 0;

    for (const auto &i : vI) {
        count += std::count(i.begin(), i.end(), 'f');
    }

    return count;
}
