#include<iostream>
#include<fstream>

using namespace std;

int main() 
{
    char name[10];  

    ofstream file("name.txt");

    cout << "Enter 5 Student Name: " << endl;

    for(int i = 0; i < 5; i++) {
        cin >> name;
        file << name<<endl;  
    }

    file.close();  



    ifstream infile("name.txt");
    cout << "\nRead names from file: " << endl;

    for(int i = 0; i < 5; i++) {
        infile >> name;
        cout << name <<endl;  
    }

    infile.close();
    
    return 0;
}