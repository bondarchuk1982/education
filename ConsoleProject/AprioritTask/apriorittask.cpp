#include "apriorittask.h"

AprioritTask::AprioritTask(size_t x, size_t y)
{
    for (size_t k = 0; k < y; ++k) {
        std::vector<char> vJ(x, 'f');
        vI.push_back(vJ);
    }
}

void AprioritTask::addDataInLine(size_t n, size_t c1, size_t c2)
{
    if (n > vI.size() || n < 1) {
        std::cout << "Ошибка! Указанная линия за пределами размера поля!" << std::endl;
    }
    else {
        setLine(vI[n - 1], c1, c2);
    }
}

void AprioritTask::setLine(std::vector<char> &v, size_t c1, size_t c2)
{
    if (c1 > v.size() || c1 < 1 || c2 > v.size() || c2 > 1) {
        std::cout << "Ошибка! Указанные клетки за пределами размера поля!" << std::endl;
    }
    else {
        std::fill(v.begin() + (c1 - 1), v.end() - (v.size() - c2), 't');
    }
}

int AprioritTask::getLampsCount()
{
    int count = 0;

    for (auto i : vI) {
        count += std::count(i.begin(), i.end(), 'f');
    }

    return count;
}
