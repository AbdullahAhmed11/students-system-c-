#include <bits/stdc++.h>
using namespace std;

// create model baseEntity
class BaseEntity
{
private:
    int id;
    string name;
    int age;
    string phoneNumber;

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
};

// create model Teacher
class Teacher : public BaseEntity
{
private:
    double sallary;
    int studentsIds[5];

public:
    // seter

    void setSallary(double sallary)
    {
        this->sallary = sallary;
    }
    void setStudentsIds(int studentsIds[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->studentsIds[i] == studentsIds[i];
        }
    }
    // geter

    int getSallary()
    {
        return sallary;
    }
    int *getStudentsIds()
    {
        return studentsIds;
    }
};

// create model students
class Student : public BaseEntity
{
private:
    double gpa;
    string n;
    Teacher teachers[5];

public:
    // seter

    void setGba(double gpa)
    {
        this->gpa = gpa;
    }
    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->teachers[i] = teachers[i];
        }
    }
    // geter

    int getGpa()
    {
        return gpa;
    }
    Teacher *getTeachers()
    {
        return teachers;
    }
};