#include<iostream>
using namespace std;

class Swap
{
private:
    int x, y;

public:
    void EnterValue()
    {
        cout << "Enter Num 1 ";
        cin >>x;

        cout << "Enter Num 2 ";
        cin >>y;
    }

    friend void swapValues(Swap &s);

    void show()
    {
        cout << "Swap value "<<x<<" "<<y<<endl;
    }
};

    void swapValues(Swap &s)
    {
    int temp = s.x;
    s.x = s.y;
    s.y = temp;
    }


int main()
{
    Swap data;

    data.EnterValue();
    swapValues(data);
    data.show();

    return 0;
}