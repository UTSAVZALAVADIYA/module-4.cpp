#include <iostream>

using namespace std;

class Interest {
public:
    int principal;
    int year;
    float rate;

    Interest(int p, int y, int r) : principal(p), year(y), rate(r) {}
    Interest(int p, int y, float r = 2.5) : principal(p), year(y), rate(r) {}

    float calculateInterest() {
        return (principal * year * rate) / 100;
    }
};

int main() {
    int p, y;
    float r;

    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter number of years: ";
    cin >> y;

        Interest interest1(p, y, 5);
    cout << "Interest for 5% rate: " << interest1.calculateInterest() << endl;

    Interest interest2(p, y);
    cout << "Interest for 2.5% rate: " << interest2.calculateInterest() << endl;

    return 0;
}