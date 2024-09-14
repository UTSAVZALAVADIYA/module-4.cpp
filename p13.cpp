#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int x =10, y =20;

    cout << "Entered value: "<<"x = "<<x<<", y = "<<y<<endl;
    
    swapValues(x, y);

    cout << "After swapping: "<<"x = " << x << " y = "<<y<<endl;

    return 0;
}