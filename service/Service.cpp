#include "../repo/Repository.cpp"
#include "../validation/Validation.cpp"

// studnt sevice
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student getStudentById(int id) = 0;
};
class StudentServiceImpl
{
private:
    StudentRepository studentRepository;
    StudentValidation studentValidation;
    ValidationService validationService;
    Student studentResult;

public:
		int addStudent(Student student) {
			if(studentValidation.validteStudent(student) == 1){
				int id = studentRepository.addStudent(student);
				if(id == -1){
					validationService.fullData("Student");
				} else {
					return id;
				}
			}
			return -1;
		}
		Student getStudentById(int id) {
			studentResult = studentRepository.getStudentById(id);
			if(studentResult.getId() == -1){
				validationService.notExist("Student",id);
			}
			return studentResult;
		}
};

// course service
class CoursesService
{
public:
    virtual int addCourse(Course course) = 0;
};
class CoursesServiceImpl
{
private:
    CourseRepository courseRepository;

public:
    int addCourse(Course course)
    {
        return courseRepository.addCourse(course);
    }
};

// teacher service
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};
class TeacherServiceImpl
{
private:
    TeacherRepository teacherRepository;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherRepository.addTeacher(teacher);
    }
};
