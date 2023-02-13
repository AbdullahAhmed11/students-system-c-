#include <bits/stdc++.h>
using namespace std;
#include "../model/Model.cpp"

/////////////student
// interface studentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student);
};

// class studentRepositoryImpl
class studentRepositoryImpl : public StudentRepository
{
private:
    Student students[25];
    int index = 0;

public:
    int addStudent(Student student)
    {
        if (index == 25)
        {
            cout << "Full Students" << endl;
        }
        else
        {
            students[index] = student;
            index++;
        }
    }
};
/////////////course
// interface courseRepository
class CourseRepository
{
};

// class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
};
/////////////teacher
// interface teacherRepository
class TeacherRepository
{
};

// class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
};