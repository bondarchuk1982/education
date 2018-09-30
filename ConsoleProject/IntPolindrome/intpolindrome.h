#ifndef INTPOLINDROME_H
#define INTPOLINDROME_H

#include <iostream>
#include <ctime>
#include <vector>

class IntPolindrome
{
public:
    IntPolindrome();
private:
    bool polindrom(int);
    void parse (int, std::vector<int>&);

};

#endif // INTPOLINDROME_H
