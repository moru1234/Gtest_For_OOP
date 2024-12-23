
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test overloaded functions in a class.

//Create a printer class - having two kind of print functions one to print int and other to print string.

class Printer 
{
public:
    string print(int printValue)
    {
        return "Integer to print is :" + to_string(printValue) + ".";
    }
    string print(string printValuest)
    {
        return "String to print is :" + printValuest + ".";
    }
};


TEST(TestFunctionOverloading, subTest1)
{
    Printer p1;
    EXPECT_EQ(p1.print(10),"Integer to print is :10.");
    //EXPECT_EQ(p2.print("Hello"), "Integer to print is :Hello.");

}

TEST(TestFunctionOverloading, subTest2)
{
    Printer p2;
    
    EXPECT_EQ(p2.print("Hello"), "String to print is :Hello.");

}

// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
