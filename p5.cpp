#include<iostream>
using namespace std;

class InFun
{
    public:

    int a;
    int b;

    void EnterData()
    {
        cout << "Enter Num 1" << endl;
        cin >> a;

        cout << "Enter Num 2" << endl;
        cin >> b;
    }

    inline int Mul()
    {
        return a * b;
    }

    inline int Cub()
    {
        return a * a * a;
    }

    void Show()
    {
        cout << "Multiplication: " << a << " , " << b << " = " << Mul() << endl;
        cout << "Cube: " << a << " , " << a << " , " << a << " = " << Cub() << endl;
    }
};

int main()
{
    InFun data;
    data.EnterData();
    data.Show();

    return 0;
}