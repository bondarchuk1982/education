#ifndef APRIORITTASK_H
#define APRIORITTASK_H

#include <iostream>
#include <vector>
#include <algorithm>

class AprioritTask
{
public:
    AprioritTask(size_t, size_t);

    void addDataInLine(size_t, size_t, size_t);
    void setLine(std::vector<char>&, size_t, size_t);
    int getLampsCount();
private:
    std::vector<std::vector<char> > vI;
};

#endif // APRIORITTASK_H
