#include<iostream>
using namespace std;

class A
{

    string s;
    public:

    A() // Default Constructor for  without Initialize 
    {

    }

    A(string s2)
    {
        s=s2;
    }

    void show()
    {
        cout<<s;
    }

    A operator + (A obj)

    {
        A obj1;
        obj1.s = s + obj.s;
        return obj1;
    }

};

int main()

{

    A ob1("My");
    A ob2("Name");
    A ob3; // without Initialize string (Default Constructor)

    ob3 = ob1+ob2;
    ob3.show();

    return 0;
}