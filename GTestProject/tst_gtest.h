#pragma once

extern char** my_argv;

#include <gtest/gtest.h>
#include <../ConsoleProject/SortingModule/sname.h>
#include <../ConsoleProject/StringPolindrome/stringpolindrome.h>
#include <../ConsoleProject/CharArraySorts/chararraysorts.h>

using namespace testing;

TEST(GTests, CharArraySortsTest)
{
    CharArraySorts chArraySorts;

    char *input = new char[6]{'b', 'd', 'a', 'c', 'e'};
    char *expected = new char[6]{'a', 'b', 'c', 'd', 'e'};
    char *actual = chArraySorts(input);
//    char *actual = chArraySorts(*my_argv);

    EXPECT_STREQ(actual, expected);
}

/*TEST(GTests, StringPolindromeTest)
{
    StringPolindrome strPolindrome;

    EXPECT_TRUE(strPolindrome("ab  ababa baba"));
    EXPECT_FALSE(strPolindrome("aba a b babs bs"));
}
*/
/* TEST(GTests, SortingModuleTest)
{
    SName sName;
    sName.wFile(); // выполняем при первом запуске теста для формирования файла
    sName.rFile();

    std::array<std::string, 5000> input = sName.getArray();
    std::array<std::string, 5000> expected = sName.stlSortArray(sName.getArray());
    std::array<std::string, 5000> actual = sName.sortArray(input);

    EXPECT_EQ(actual, expected);
//    ASSERT_THAT(0, Eq(0));
}
*/
