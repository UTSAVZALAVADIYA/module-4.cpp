#include <iostream>
using namespace std;

template <class T>
void ArraySort(T A[], int s)
{
    int i, j;
    T temp;
    for (i = 0; i < s - 1; i++)
    {
        for (j = i + 1; j < s; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main()
{
    int A[5];  
    cout << "Enter 5 value: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    ArraySort(A, 5);  
    cout << "Sorted value: ";
    
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}