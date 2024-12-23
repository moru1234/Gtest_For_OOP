#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <vector>
using namespace std;

//
//Concepts of std::vector in C++
//std::vector is a sequence container in C++ that is used to store elements in a dynamic array, meaning it can grow or shrink in size during the program's execution. Vectors are part of the C++ Standard Library and are defined in the <vector> header file.
//
//Key properties of std::vector:
//
//Dynamic Size : Unlike static arrays, vectors can grow and shrink as elements are added or removed.
//Random Access : Elements can be accessed using an index(like arrays).
//Efficient Operations : Vectors offer efficient appends to the end and random access to elements.
//Memory Management : Automatically manages memory internally.
//Basic operations and methods :
//
//    push_back() : Adds an element to the end of the vector.
//    pop_back() : Removes the last element.
//    size() : Returns the number of elements in the vector.
//    empty() : Checks if the vector is empty.
//    at() : Provides access to an element with bounds checking.
//    clear() : Removes all elements from the vector.
//    insert() : Inserts an element at a specified position.
//    erase() : Removes an element at a specified position.


//Task 1 -  create a vector, add elements, access elements, and display the size of the vector.


//- add element to vector


void addElement(vector<int> &v1, vector<int> &v2)
{
    v1.insert(v1.end(), v2.begin(), v2.end());

}
TEST(vectorTest, AddElementVector)
{
    vector<int> vec = { 1,2,3 };
    vector<int> vec2 = { 2,3 };
    addElement(vec, vec2);

    EXPECT_EQ(vec.size(), 5);
    EXPECT_EQ(vec[2], 3);
    EXPECT_EQ(vec[3], 2);
}

int getElement(vector<int>& v1, int index)
{
    if (index < v1.size())
    {
        return v1[index];
    }
    throw out_of_range("Index out of range");        
}
TEST(vectorTest, GetElementOfVector)
{
    vector<int> vec = { 1,2,3 };
    getElement(vec, 1);

    EXPECT_EQ(vec[1], 2);
}

void eraseElementOfVector(vector<int>& v1, int index)
{
    if (index < v1.size())
    {
        v1.erase(v1.begin() + index);
    }  
}
TEST(vectorTest, EraseElementOfVector)
{
    vector<int> vec = { 1,2,3 };
    eraseElementOfVector(vec, 1);

    EXPECT_EQ(vec[0], 1);
    EXPECT_EQ(vec[1], 3);
}

void ModifyElementOfVector(vector<int>& v1, int index, int value)
{
    if (index < v1.size())
    {
        v1[index] = value;
    }
}
TEST(vectorTest, TestModifyElementOfVector)
{
    vector<int> vec = { 1,2,3 };
    ModifyElementOfVector(vec, 2, 5);
    EXPECT_EQ(vec[2], 5);
}

bool IsVectorEmpty(vector<int>& v1)
{
    return v1.empty();
}
TEST(vectorTest, TestIsVectorEmpty)
{
    vector <int> vec = { 1,2,3 };
    EXPECT_FALSE(IsVectorEmpty(vec));
}


// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
