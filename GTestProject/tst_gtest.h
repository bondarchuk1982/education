#pragma once

extern char** my_argv;

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <../ConsoleProject/SortingModule/sname.h>
#include <../ConsoleProject/StringPolindrome/stringpolindrome.h>
#include <../ConsoleProject/CharArraySorts/chararraysorts.h>
#include <../ConsoleProject/AprioritTask/apriorittask.h>

using namespace testing;

class TestsClass : public ::testing::Test
{
protected:
    AprioritTask aprioritTask;
//	CharArraySorts chArraySorts;
};

TEST_F(TestsClass, ATaskSetFieldTest)
{
    EXPECT_TRUE(aprioritTask.setField(4, 4));
    EXPECT_FALSE(aprioritTask.setField(0, 4));
    EXPECT_FALSE(aprioritTask.setField(4, 0));
    EXPECT_FALSE(aprioritTask.setField(1000000001, 4));
    EXPECT_FALSE(aprioritTask.setField(4, 1000000001));
    EXPECT_FALSE(aprioritTask.setField(0, 0));
    EXPECT_FALSE(aprioritTask.setField(1000000001, 1000000001));
    EXPECT_FALSE(aprioritTask.setField(-4, 4));
    EXPECT_FALSE(aprioritTask.setField(4, -4));
}

TEST_F(TestsClass, ATaskAddDataInLineTest)
{
    aprioritTask.setField(4, 4);
    EXPECT_TRUE(aprioritTask.addDataInLine(4, 4, 4));
    EXPECT_FALSE(aprioritTask.addDataInLine(0, 4 , 4));
    EXPECT_FALSE(aprioritTask.addDataInLine(10, 4 , 4));
    EXPECT_FALSE(aprioritTask.addDataInLine(-10, 4 , 4));
    EXPECT_FALSE(aprioritTask.addDataInLine(10, -4 , 4));
    EXPECT_FALSE(aprioritTask.addDataInLine(10, 4 , -4));
}

TEST_F(TestsClass, ATaskSetLineTest)
{
    std::vector<char> v(4, 'f');

    EXPECT_TRUE(aprioritTask.setLine(v, 2, 4));
    EXPECT_FALSE(aprioritTask.setLine(v, 0 , 4));
    EXPECT_FALSE(aprioritTask.setLine(v, 2 , 0));
    EXPECT_FALSE(aprioritTask.setLine(v, -2, 4));
    EXPECT_FALSE(aprioritTask.setLine(v, 2, -4));
}

TEST_F(TestsClass, ATaskGetLampsCountTest)
{
    aprioritTask.setField(4, 4);
    EXPECT_EQ(aprioritTask.getLampsCount(), 16);

    aprioritTask.addDataInLine(2, 2, 3);
    aprioritTask.addDataInLine(3, 1, 4);
    aprioritTask.addDataInLine(4, 4, 4);
    EXPECT_EQ(aprioritTask.getLampsCount(), 9);

    aprioritTask.addDataInLine(1, 1, 4);
    aprioritTask.addDataInLine(2, 1, 4);
    aprioritTask.addDataInLine(3, 1, 4);
    aprioritTask.addDataInLine(4, 1, 4);
    EXPECT_EQ(aprioritTask.getLampsCount(), 0);
}

/*
TEST_F(TestsClass, CharArraySortsTest)
{

    char *input = new char[6]{'b', 'd', 'a', 'c', 'e'};
    char *expected = new char[6]{'a', 'b', 'c', 'd', 'e'};
    char *actual = chArraySorts(input);

    EXPECT_STREQ(actual, expected);
}
*/
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
