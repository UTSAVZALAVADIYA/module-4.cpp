#include <iostream>
using namespace std;

class Account
{
protected:
    string customerName;
    string accountNumber;
    int balance;

public:

        Account(string name_, string accNumber_, int initialBalance_)
        
    {   
        customerName = name_;
        accountNumber = accNumber_; 
        balance = initialBalance_;
    }

    void displayBalance()
    {
        cout << "Balance: "<<balance<<endl;
    }
};



class SavingsAccount : public Account
{
private:
    int interestRate;

public:
    SavingsAccount(string name_, string accNumber_, int initialBalance, int rate) :Account(name_, accNumber_, initialBalance)
    {
        interestRate = rate;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposited: "<<amount<<endl;
        
    }

    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Insufficient balance!"<<endl;
        else
        {
            balance -= amount;
            cout << "Withdraw: "<<amount<<endl;
            displayBalance();  
    }
    }

    void Interest()
    {
        int interest = (balance * interestRate) / 100;
        cout << "Interest: " << interest << endl;
        deposit(interest);
        displayBalance(); 
    }
};




class CurrentAccount : public Account
{

private:
    int minimumBalance;
    int serviceCharge;

public:
    CurrentAccount(string name_, string accNumber_, int initialBalance, int minBalance, int charge) :Account(name_, accNumber_, initialBalance)
    {
        minimumBalance = minBalance; 
        serviceCharge = charge;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposited: "<<amount<<endl;
        
    }

    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Insufficient balance"<<endl;
        else
        {
            balance -= amount;
            cout << "Withdrew: "<<amount<<endl;
            displayBalance();  
            checkMinimumBalance();
        }
    }

    void checkMinimumBalance()
    {
        if (balance < minimumBalance)
        {
            cout << "Balance Low, Service charge  " << serviceCharge << " applly." << endl;
            balance -= serviceCharge;
            displayBalance();
        }
    }
};



int main()
{
    
    SavingsAccount savings("Rajan", "S12345", 1000, 5);
    CurrentAccount current("Rajan", "C54321", 1500, 500, 10);

    cout << "Savings Account:" << endl;
    savings.displayBalance();  
    savings.deposit(500);
    savings.Interest();   
    savings.withdraw(200);
    cout << endl;

    

    cout << "Current Account:" << endl;
    current.displayBalance();  
    current.deposit(1000);
    current.withdraw(1200);
    current.withdraw(100);     
    

    return 0;
}