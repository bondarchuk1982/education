#include "SortingModule/sname.h"
#include "ER_Idiom/er_idiom.h"
#include "IntPolindrome/intpolindrome.h"
#include "ReversSLinkedList/reversslinkedlist.h"
#include "StringPolindrome/stringpolindrome.h"
#include "CharArraySorts/chararraysorts.h"
#include "AprioritTask/apriorittask.h"

using namespace std;


//int main(int argc, char *argv[])
int main()
{
    size_t m = 0, n = 0, k = 0;

    std::cout << "Введите размеры поля MxN и количество трамвайных полей:" << std::endl;
    std::cin >> m >> n >> k;

    AprioritTask aTask(m, n);

    while (k != 0) {
        size_t c1 = 0, c2 = 0;
        std::cin >> n >> c1 >> c2;

        aTask.addDataInLine(n, c1, c2);

        k--;
    }

    std::cout << "Количество фораней: " << aTask.getLampsCount() << std::endl;

/*  Класс для сортировка массива char
    CharArraySorts chArraySorts;
    char *str = chArraySorts(*argv);

    std::cout << str << std::endl;
*/

/* Класс проверяющий является ли строка полиндомом
    StringPolindrome strPolindrome;

    if (strPolindrome("aba bab   a ba"))
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
*/

//    ReversSLinkedList rSLinkedList; // Пример модуля для переворота однонаправленного списка

//    IntPolindrome intPolindrome; // Класс поиска максимального полиндорома для произведения двух трёхзначных цифр

/* // Erase–remove idiom
    ER_Idiom erIdiom;
    erIdiom.ER_IdiomModule();
*/

/* // SortingModule
    SName sName;
    sName.wFile();
    sName.rFile();
    sName.arrayInTerminal();
    sName.nameToNumber();
*/
    return 0;
}
