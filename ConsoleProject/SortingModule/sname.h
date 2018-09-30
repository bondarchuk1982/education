#ifndef SNAME_H
#define SNAME_H

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <algorithm>
#include <array>
#include <stdlib.h>
#include <cstring>
#include <sstream>
#include <iterator>

class SName
{
public:
    SName(); // Конструктор класса

    void wFile(); // Создание или запись сгенерированных имён в файл
    void rFile(); // Считывание данных из файла

    void setArray(std::array<std::string, 5000>&); // Заполнить массив данными
    std::array<std::string, 5000> getArray(); // Получить массив данных

    std::array<std::string, 5000> stlSortArray(std::array<std::string, 5000>); // STL метод сортировки
    std::array<std::string, 5000> sortArray(std::array<std::string, 5000>); // собственный метод сортировки

    void arrayInTerminal(); // вывод списка имён в терминал
    void nameToNumber(); // Перевод имён в цифры и получение общего числа для всех имён
private:
    std::array<std::string, 5000> nameArray; // Массив имён

    void parseString(std::string&);
};

#endif // SNAME_H
