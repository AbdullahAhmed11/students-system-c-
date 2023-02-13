#include <bits/stdc++.h>
using namespace std;
// create shareData model
class ShareData
{
private:
    int id;
    string name;

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
    // geter
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

// create model baseEntity
class BaseEntity : public ShareData
{
private:
    int age;
    string phoneNumber;

public:
    void setAge(int age)
    {
        this->age = age;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
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
        for (int i = 0; i < sizeof(studentsIds) / sizeof(studentsIds[0]); i++)
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

// create course model
class Course : public ShareData
{
private:
    double hour;
    int studentsIds[5];

public:
    // seter
    void setHour(double hour)
    {
        this->hour = hour;
    }
    void setStudentsIds(int studentsIds[5])
    {
        for (int i = 0; i < sizeof(studentsIds) / sizeof(studentsIds[0]); i++)
        {
            this->studentsIds[i] == studentsIds[i];
        }
    }

    // geter
    double getHour()
    {
        return hour;
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
    Course courses[5];

public:
    // seter

    void setGba(double gpa)
    {
        this->gpa = gpa;
    }
    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0; i < sizeof(teachers) / sizeof(teachers[0]); i++)
        {
            this->teachers[i] = teachers[i];
        }
    }
    void setCourses(Course courses[5])
    {
        for (int i = 0; i < sizeof(courses) / sizeof(courses[0]); i++)
        {
            this->courses[i] = courses[i];
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
    Course *getCourses()
    {
        return courses;
    }
};
