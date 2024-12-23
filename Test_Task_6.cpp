
#include <gtest/gtest.h>
#include<string>
using namespace std;

//Task: Test proper initialization of constructors and destructors.

// Class Datalogger - create constructor initialize with - "Data Logg constructor"
//                  - Create Destructor - "Data logger destructor"


class Datalogger
{
private:

public:
    string log;
    Datalogger():log ("Data Logg constructor")
    {

    }
    ~Datalogger()
    {
        log = "Data Logg Destructor";
    }
};



TEST(ConstructorDestructorTest, subTestConstructor)
{
    //Datalogger log1;
    Datalogger* log1 = new Datalogger;// Create a Datalogger object dynamically. A new Logger object is created on the heap.

    EXPECT_EQ(log1->log, "Data Logg constructor");
}


// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
