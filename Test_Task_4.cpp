
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test polymorphism using a base class pointer or reference.
// Create a base class shape to get area, then calcute area of circle using base class pointer/reference.


// Base class - shape = function: virtual double area()
// derived class - circle =  funcion: double area() override 
// During test, create object using base class and check its area.

class shape
{
public:
    virtual double area()
    {
        return 0;
    }
};

class circle : public shape
{
private: double radius;
public:
    circle(double r): radius(r){}
    double area() override
    {
        return (3.14 * radius * radius);
    }
};



TEST(TestAreaOfCircle,AreaOfCircle)
{
    circle c1(5.0);

    EXPECT_NEAR(c1.area(), 78.5, 0.1);
}

// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
