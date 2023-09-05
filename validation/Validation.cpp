class Valdiation{
public:
    void FullData(string Data){
        cout << "Full " << Data << "!" << endl;
    }

};



class StudentValidation{
public:
    int validateFunc(Student student){
        if (student.getName().size() == 0 || student.getName().size() < 4 || student.getName().size() > 10)
        {
            cout << "Invalid Name!\n";
        }
        else if (student.getAge() >= 30 && student.getAge() <= 18)
        {
            cout << "invaild Aga \n";
        }
        else if (student.getPhoneNumber().size() != 11 ||
            student.getPhoneNumber()[0] != '0' ||(
            student.getPhoneNumber()[1] + student.getPhoneNumber()[2] != '1'+'1'&& 
            student.getPhoneNumber()[1] + student.getPhoneNumber()[2] != '1'+'2'&& 
            student.getPhoneNumber()[1] + student.getPhoneNumber()[2] != '1'+'0'&&
            student.getPhoneNumber()[1] + student.getPhoneNumber()[2] != '1'+'5')
        )
        {
            cout << "Invalid Phone Number\n";
        }
        else if (student.getGpa() > 4 && student.getGpa() < 0)
        {
            cout << "invalid Gpa \n";
        }
        else
        {
            return 1;
        }
        return -1;
    }
};


class CourseValidation{
public:
    int validateFunc(Course course){
        if (course.getHours() < 2 && course.getHours() > 5)
        {
            cout << "Invalid Hours!\n";
        }
        else if (course.getName().size() == 0 && course.getName().size() > 20 && course.getName().size() < 4)
        {
            cout << "Invalid Name\n";
        }
        else{
            return 1;
        }
        return -1;
    }
};


class TeacherValidation{
public:
    int validateFunc(Teacher teacher){
        if (teacher.getName().size() == 0 && teacher.getName().size() > 10 && teacher.getName().size() < 4)
        {
            cout << "Invalid Name\n"; 
        }
        else if (
            teacher.getPhoneNumber().size() != 11 ||
            teacher.getPhoneNumber()[0] != '0' ||(
            teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2] != '1'+'1'&& 
            teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2] != '1'+'2'&& 
            teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2] != '1'+'0'&&
            teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2] != '1'+'5'))
        {
            cout << "Invalid Phone Number\n";
        }
        else if (teacher.getAge() > 65 && teacher.getAge() < 32)
        {
            cout << "invalid Age\n";
        }
        else if (teacher.getSalary() < 8000 &&  teacher.getSalary() > 15000)
        {
            cout << "Invalid Salary\n";
        }
        else
        {
            return 1;
        }    
        return -1;
    }

};