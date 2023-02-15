#include <bits/stdc++.h>
using namespace std;
#include "../model/Model.cpp"
//static data
class Data {
public:
		static Student students[25];
		static int indexStudent;
		static int idStudent;
		static Course courses[25];
		static int indexCourse;
		static int idCourse;
		static Teacher teachers[25];
		static int indexTeacher;
		static int idTeacher;
};

// init static data
Student Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;
Course Data::courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;
Teacher Data::teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;



/////////////student
// interface studentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student getStudentById(int id) = 0;
    virtual int editStudent(Student student) = 0;
};

// class studentRepositoryImpl
class studentRepositoryImpl : public StudentRepository
{
private:
    Data data;
    Student invalidStudent;
    int index = -1;

public:
    int addStudent(Student student)
    {
        if (data.indexStudent == 25)
        {
            return -1;
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudent++];
        }
        return student.getId();
    }
    Student getStudentById(int id) {
        for(int i=0; i<data.indexStudent;i++){
            if(data.students[i].getId == id) {
                return data.students[i];
            }
        }
        invalidStudent.setId(-1)
        return invalidStudent;
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
