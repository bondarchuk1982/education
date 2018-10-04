#include "stringpolindrome.h"

bool StringPolindrome::operator()(std::string str)
{
    size_t iBegin = 0;
    size_t iEnd = str.length() - 1;
    while (iBegin < iEnd) {
        if (str[iBegin] == ' ') {
            iBegin++;
            continue;
        }
        else if (str[iEnd] == ' ') {
            iEnd--;
            continue;
        }
        else if (str[iBegin] != str[iEnd]) return false;

        iBegin++;
        iEnd--;
    }
    return true;
}
