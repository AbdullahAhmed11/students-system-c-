#include <bits/stdc++.h>
using namespace std;
#include "../model/Model.cpp"

/////////////student
// interface studentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student) = 0;
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
public:
    virtual int addCourse(Course course) = 0;
};

// class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
private:
    Course courses[25];
    int index = 0;

public:
    int addCourse(Course course)
    {
        if (index == 25)
        {
            cout << "Full Courses" << endl;
        }
        else
        {
            courses[index] = course;
            index++;
        }
    }
};
/////////////teacher
// interface teacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

// class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
private:
    Teacher teachers[25];
    int index = 0;

public:
    int addTeacher(Teacher teacher)
    {
        if (index == 25)
        {
            cout << "Full Courses" << endl;
        }
        else
        {
            teachers[index] = teacher;
            index++;
        }
    }
};