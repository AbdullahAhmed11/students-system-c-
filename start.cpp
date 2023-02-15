#include <iostream>
using namespace std;
#include "controller/Controller.cpp"

void displayPRogram() {
    cout << "\t\t**********Student Mangement System" << endl;
    cout << "Please Enter Your Process You Need To Do !" << endl;
    cout << "1 - About Student"<< "\t"<< "2 - About Teacher" << endl;
    cout << "3 - About Courses"<< "\t"<< "4 - Exit" << endl;

}
void showList(string value) {
        cout << "1 - Add "<< value<< "\t\t"<< "2 - Remove "<<value<< endl;
        cout << "3 - Edit "<< value << "\t"<< "4 - Show "<<value << endl;
        cout << "5 - Exit" << endl;
}
void addStudent() {
    cout<<"Please Enter Student Data: "<<endl;
    Student student;
    cout << "Enter Student Name: ";
    string name;
    cin>>name;
    student.setName(name);
    cout << "Enter Student Name: ";
    string name;
    cin>>name;
    student.setName(name);
    StudentController studentController;
    id=studentController.addStudent(student);
    if(id != -1){
		cout<<"Success Added Student With Id ["<<id<<"]"<<endl;
	}
}
void showStudentByID() {
	cout<<"Enter Student Id :";
	cin>>id;
	StudentController studentController;
	studentController.showStudentById(id);
}

int main()
{
    int process;
    int flag = 0;
    while(true) {
        displayPRogram();
    cin >> process;
    switch(process)
    {
    case 1:
        showList("Student");

        break;
    case 2:
        showList("Teacher");

        break;
    case 3:
        showList("Course");

        break;
    case 4:
        cout<<"Process Exit"<<endl;
        flag = 1;
        break;
    default:
        cout<<"Invalid choose"<<endl;
    }
    if(flag == 1){
        break;
    }



}
}
