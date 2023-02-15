#include "../service/Service.cpp"
// student controller
class StudentController
{
private:
    StudentService studentService;
    Student studentResult;

public:
		int addStudent(Student student) {
			return studentService.addStudent(student);
		}
		void showStudentById(int id){
			studentResult = studentService.getStudentById(id);
			if(studentResult.getId() != -1){
				cout<<"\t\t ID \t\t Name \t\t Age \t\t Phone Number \t\t GPA"<<endl;
				cout<<"\t\t"<<studentResult.getId()<<"\t\t"<<studentResult.getName()<<"\t\t"<<studentResult.getAge()<<"\t\t"<<studentResult.getPhoneNumber()<<"\t\t"<<studentResult.getGpa()<<endl;
			}
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
