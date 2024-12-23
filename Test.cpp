
#include <gtest/gtest.h>

//Task: Test a simple class with methods and member variables.

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int substract(int a, int b)
    {
        return a - b;
    }
};

TEST(CalculatorOperation, TestCaseAdd)
{
    Calculator calc;
    EXPECT_EQ(calc.add(2, 4), 6);
}

TEST(CalculatorOperation, TestCaseSubstract)
{
    Calculator calc;
    EXPECT_EQ(calc.substract(4, 2), 2);
}


// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
