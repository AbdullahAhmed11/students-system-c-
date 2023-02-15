/******validation classs********/
//student validation class
class StudentValidation {
    int validateStudent(Student student) {
        if(student.getName.size() ==0 ||
           student.getName.size() > 7 ||
           student.getName.size() < 5) {
            cout << "Invalid Name !"<<endl;
           } else if(student.getAge() >=30 || student.getAge() <=10) {
            cout << "Invalid Age !"<< endl;
        } else if (student.getGpa() >=10 || student.getGpa() < 0) {
            cout <<"Invalid Gba" << endl;
        }else {
            return 1;
        }
        return -1
    }

};
