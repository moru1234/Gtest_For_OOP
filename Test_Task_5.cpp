
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test overriding and base class behavior.

// Class base - virtual function greet - "Hello from base class"
// Class derived - override function greet - "Hello from derived class"
//During test - create derived object which is hold by base class and it is returning greet from derived class.

class Base
{
public: virtual string Greet()
    {
        return "Hello From Base Class!";
    }
};

class Derived: public Base
{
public:string Greet() override
    {
        return "Hello From Derived Class!";
    }

};

TEST(CheckDerivedClassImplemenation, subTest1)
{
    Base* B1 = new Derived;

    EXPECT_EQ(B1->Greet(), "Hello From Derived Class!");
}


// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
