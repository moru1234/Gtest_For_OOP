
#include <gtest/gtest.h>

//Task: Test private member variables using getter and setter methods.
class BankAccount
{
private: double balance;
public:
    BankAccount() :balance(0) {};

    void deposit(double addDeposit)
    {
        this->balance=this->balance + addDeposit;
    }

    double getBalance() { return this->balance; }


};

TEST(BankAccount, BankAccountDepositTest)
{
    BankAccount B1;
    B1.deposit(100);
    EXPECT_EQ(B1.getBalance(), 100);
}

// Main function for running tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
