#include "sname.h"

SName::SName(){}

void SName::wFile()
{
    std::srand(unsigned(std::time(nullptr)));

    std::ofstream fs("Name.txt"); // Имя файла

    if (!fs.is_open()) { // если файл не открыт
        std::cout << "Файл не создан или не найден!\n"; // сообщить об этом
    }
    else {

        std::string str = "";

        for (int i = 0; i < 5000; ++i) {
            size_t lng = std::rand()% 8 + 2;

            for (size_t j = 0; j < lng; ++j) {
                char tmp = char(rand()%26+0x61);
                str.push_back(tmp);
            }

            str += " ";
        }
        fs << str;
    }
    fs.close();
}
void SName::rFile()
{
    std::ifstream fs("Name.txt"); // Имя файла
    std::string str = "";

    if (!fs.is_open()) // если файл не открыт
        std::cout << "Файл не найден!\n"; // сообщить об этом
    else {
        std::ostringstream oss;
        oss << fs.rdbuf();
        str = oss.str();

        fs.close(); // закрываем файл
    }
    parseString(str);
}

void SName::setArray(std::array<std::string, 5000> &a) { nameArray = a; }
std::array<std::string, 5000> SName::getArray() { return nameArray; }

std::array<std::string, 5000> SName::stlSortArray(std::array<std::string, 5000> nameList)
{
    std::sort(nameList.begin(), nameList.end());
    return nameList;
}
std::array<std::string, 5000> SName::sortArray(std::array<std::string, 5000> nameList)
{
    size_t index = 0;
    for (auto &i : nameList) { // цикл по элементам массива имён

        size_t min_index = index; // индекс текущего имени в массиве

        for (size_t j = index + 1; j < nameList.size(); j++) { // цикл по элементам массива имён
            if (i == "") break; // конец массива
            else if (nameList[j] < nameList[min_index]) min_index = j; // если нашёлось имя меньшее (по алфавиту) чем текущее в
                                                                        // массиве присваиваем минимальному индексу его позицию
        }

        if (index != min_index) { // если текущий индекс не совпадает с минимальным именем
            std::string tmp = i; // из текущей позиции записываем имя во временную переменную
            i = nameList[min_index]; // минимальное имя записываем в текущую позицию
            nameList[min_index] = tmp; // в позицию минимального имени записываем значение из временной переменной
        }
        index++;
    }
    return nameList;
}

void SName::parseString(std::string &str)
{
    std::string tmp = "";
    size_t index = 0;

    std::array<std::string, 5000> nArray;

    for (auto i : str){
        if (isalpha(i)) {
            tmp += i;
        }
        else {
            if (tmp != "") {
                nArray[index] =  tmp;
                tmp.clear();
                index++;
            }
        }
    }

    setArray(nArray);
}

void SName::arrayInTerminal()
{
    std::cout << "**********************************************************\n";
    for (auto i : nameArray) { // цикл по элементам массива имён
        std::cout << i << '\n'; // выводим очередное имя из массива
    }
    std::cout << "**********************************************************\n";
}

void SName::nameToNumber()
{
    double rezult = 0; // общая цифра для всех имён

    for (auto i : nameArray) { // цикл по элементам массива имён

        std::string str = i; // считываем имя из массива имён
        char buff[str.length() + 1]; // создаём буфер символов для имени
        strcpy(buff, str.c_str()); // копируем символы имени в буфер

        double num = 0; // цифра для текущего имени

        for (size_t i = 0; i < str.length(); i++) // цикл по символам буфера
            num += static_cast<int>(buff[i]) - 96; // преобразуем символ в цифру

        rezult += num; // суммируем к общему числу
    }

    std::cout << "**********************************************************\n";
    printf("%.0f \n", rezult);
}
