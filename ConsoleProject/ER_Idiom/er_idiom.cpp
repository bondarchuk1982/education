#include "er_idiom.h"

ER_Idiom::ER_Idiom(){ }

void ER_Idiom::ER_IdiomModule()
{
    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 0);
    std::random_shuffle(v.begin(), v.end());
    v.erase(std::remove(v.begin(), v.end(), 8), v.end()); // решение для Erase–remove idiom

    for (auto n : v)
        std::cout << n << "\n";
}
