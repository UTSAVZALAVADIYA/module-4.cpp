#include <iostream>
using namespace std;

class Matrix
{
    int a, b, c;

public:
    Matrix(int a_, int b_, int c_)
    {
        a = a_;
        b = b_;
        c = c_;
    }

    Matrix operator+(Matrix m)
    {
        return Matrix(a + m.a, b + m.b, c + m.c);
    }
    

    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    Matrix m1(1, 2, 3);
    Matrix m2(4, 5, 6);
    Matrix m3 = m1 + m2;

    m3.display();

    return 0;
}