#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int age;
    string phoneNumber;
    double gpa;

public:
    // seter
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    void setGba(double gpa)
    {
        this->gpa = gpa;
    }
    // geter
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getPhoneNumer()
    {
        return phoneNumber;
    }
    int getGpa()
    {
        return gpa;
    }
};

int main()
{
    cout << "Hello worldaa!" << endl;
}