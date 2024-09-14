
#include<iostream>

using namespace std;

class BankAccount
{
    public:

    string depositerName;
    int accountNumber;
    string accountType;
    int balance;

    BankAccount(string depositerName_, int accountNumber_, string accountType_, int balance_)

    {
        depositerName = depositerName_;
        accountNumber = accountNumber_;
        accountType = accountType_;
        balance = balance_;
    }

    void deposite(int amount)
    {
        balance += amount;
        cout<< balance << endl;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout<<"Please Deposite Amount to withdraw amount" << endl;
        }
        else
        {
            balance -= amount;
            cout<<balance<<endl;
        }
        }
        void ShowDetails()
        {
            cout<<"Depositer Name: "<< depositerName <<endl;
            cout<<"Account Number: "<< accountNumber <<endl;
            cout<<"Account Type: "<< accountType <<endl;
            
        }
    
};

    int main()
    {
            BankAccount data("utsav",955811,"Current",8000000);
            
            data.ShowDetails();
            data.deposite(100000);
            data.withdraw(99);
            




        return 0;
    }