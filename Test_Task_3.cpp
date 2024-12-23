
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test a derived class that extends functionality of a base class.
// Write a base class animal and then for derived class expect sound of "Woof" of that animal.
class Animal
{
private:
public:

    virtual string sound()
    {
        return "Sound Unknown!";
    }

};

class Dog: public Animal
{
public:
    string sound() override
    {
        return "Woof";
    }
};

TEST(DerivedClassSoundCheck,DogSound)
{

    Dog D1;

    EXPECT_EQ(D1.sound(), "Woof");

}

// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
