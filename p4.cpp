
#include<iostream>
using namespace std;

class Interest
{
    public:
    int principal;
    int year;
    float rate;
    float simpleInterest;

    Interest(int principal_, int year_, int rate_)
    {
        principal = principal_;
        year = year_;
        rate = rate_;
        simpleInterest = (principal * year * rate) / 100.0;
    }

    Interest(int principal_, int year_, float rate_ = 2.5)
    {
        principal = principal_;
        year = year_;
        rate = rate_;
        simpleInterest = (principal * year * rate) / 100.0;
    }

    void Display()
    {
        cout << "Principal: " << principal << endl;
        cout << "Year: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple interest: " << simpleInterest << endl;
    }
};

int main()
{
    Interest interest1(10000, 5, 3);  
    interest1.Display();

    return 0;
}
