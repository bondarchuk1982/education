#include "SortingModule/sname.h"
#include "ER_Idiom/er_idiom.h"
#include "IntPolindrome/intpolindrome.h"
#include "ReversSLinkedList/reversslinkedlist.h"
#include "StringPolindrome/stringpolindrome.h"
#include "CharArraySorts/chararraysorts.h"

using namespace std;

int main(int argc, char *argv[])
{
    CharArraySorts chArraySorts;
    char *str = chArraySorts(*argv);

    std::cout << str << std::endl;

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
