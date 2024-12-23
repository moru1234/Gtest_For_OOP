
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test overloaded operators in a class.
// 
//Create a Complex class - having real, img as two elements.
//                       - overload the + operator to add real and img part.
//                       - Write test to test the same.
//                       - 

class Complex
{
private:


public:
    int real;
    int img;
    Complex(int r, int i) : real(r), img(i)
    {

    }

    Complex operator+(Complex C1)
    {
        this->real = this->real + C1.real;
        this->img = this->img + C1.img;
        return Complex(this->real, this->img);
    }
};

TEST(OperatorOverloading, SubTest1)
{
    Complex c1(1,2), c2(2,3), c3(0,0);

    c3 = c1.operator+(c2);

    EXPECT_EQ(c3.real, 3);
    EXPECT_EQ(c3.img, 5);
}

// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
