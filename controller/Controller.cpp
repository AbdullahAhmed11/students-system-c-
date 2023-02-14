#include "../service/Service.cpp"
// student controller
class StudentController
{
private:
    StudentService studentService;

public:
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }
};
// courses controller
class CourseController
{
private:
    CoursesService cursesService;

public:
    int addCourse(Course course)
    {
        return cursesService.addCourse(course);
    }
};
// teacher controller
class TeacherController
{
private:
    TeacherService teacherService;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
}