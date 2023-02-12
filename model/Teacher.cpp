#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    int id;
    string name;
    int age;
    string phoneNumber;
    double sallary;

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
    void setSallary(double sallary)
    {
        this->sallary = sallary;
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
    int getSallary()
    {
        return sallary;
    }
};

int main()
{
    cout << "Hello worldaa!" << endl;
}