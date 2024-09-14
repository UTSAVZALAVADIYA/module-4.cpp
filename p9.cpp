#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name_, int age_)
    {
        name = name_;
        age = age_;
    }
};

class Student : public Person
{
public:
    float percentage;

    Student(string name_, int age_, float percentage_) : Person(name_, age_)
    {
        percentage = percentage_;
    }

    void showStudent()
    {   
        cout<<"Student Data"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Percentage: " << percentage << "%" << endl<<endl;
    }


};

class Teacher : virtual public Person
{
public:
    int salary;

    Teacher(string name_, int age_, int salary_) : Person(name_, age_)
    {
        salary = salary_;
    }

    void showTeacher()
    {
        cout<<"Teacher data"<<endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl<<endl;
    }


};

class Member : public Student, public Teacher
{
public:
    Member(string studentName, int studentAge, float percentage, string teacherName, int teacherAge, int salary) : Person(studentName, studentAge), Student(studentName, studentAge, percentage), Teacher(teacherName, teacherAge, salary)
    {
    }


    void showMember()
    {

        showStudent();
        showTeacher();
    }
};

int main()
{
    Member m("Rajan", 20, 95.5, "Jaydeep Sir", 45, 80000);


    cout << "Member Data"<<endl<<endl;
    

    m.showMember();

    return 0;
}