#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <../ConsoleProject/SortingModule/sname.h>

using namespace testing;

TEST(GTests, SortingModuleTest)
{
    SName sName;
//    sName.wFile(); // выполняем при первом запуске теста для формирования файла
    sName.rFile();

    std::array<std::string, 5000> input = sName.getArray();
    std::array<std::string, 5000> expected = sName.stlSortArray(sName.getArray());
    std::array<std::string, 5000> actual = sName.sortArray(input);

    EXPECT_EQ(actual, expected);
//    ASSERT_THAT(0, Eq(0));
}
