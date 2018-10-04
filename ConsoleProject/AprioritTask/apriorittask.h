#ifndef APRIORITTASK_H
#define APRIORITTASK_H

#include <iostream>
#include <vector>
#include <algorithm>

class AprioritTask
{
public:
    AprioritTask() {}

    bool setField(size_t, size_t);

    bool addDataInLine(size_t, size_t, size_t);
    bool setLine(std::vector<char>&, size_t, size_t);

    int getLampsCount();
private:
    std::vector<std::vector<char> > vI;
};

#endif // APRIORITTASK_H
