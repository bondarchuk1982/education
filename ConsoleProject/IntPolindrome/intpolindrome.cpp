#include "intpolindrome.h"

IntPolindrome::IntPolindrome()
{
    std::srand(unsigned(std::time(nullptr)));

    int num = (std::rand() % 899 + 100)*(std::rand() % 899 + 100);
    std::cout << "num: "<< num << std::endl;
    std::cout << "************************" << std::endl;

    int mP = 0;
    for (int i = num; i > 10; --i) {
        if (polindrom(i)) {
            mP = i;
            break;
        }
    }

    std::cout << "Max polindrom: "<< mP << std::endl;
    std::cout << "************************" << std::endl;
}

bool IntPolindrome::polindrom(int num)
{
    std::vector <int> v;

    parse(num, v);

    size_t iE = v.size() - 1;
    size_t iB = 0;

    while(iB < iE) {
        if (v.at(iB) != v.at(iE)) return false;

        iB++; iE--;
    }

    return true;
}

void IntPolindrome::parse(int num, std::vector<int> &v)
{
    while(num != 0){
        v.insert(v.begin(), num%10);
        num /= 10;
    }
}
