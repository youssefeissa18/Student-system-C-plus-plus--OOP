#include "../repo/Repo.cpp"


////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Interface
class StudentService{
public:
   virtual int addStudent(Student student) = 0;
};
// Student Service impelemntaion 
class StudentServiceimp : StudentService{
private:
    StudentRepoIMP studentRepo;
public:
    int addStudent(Student student){
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
            return studentRepo.addStudent(student);
        }
        return -1;
    }
    
};


////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseService{
public:
    virtual int addCourse(Course course) = 0;
};

// Course Service impelemntaion 
class CourseServiceimp : public CourseService{
private:
    CourseRepoIMP courseRepo;
public:
    int addCourse(Course course){
        if (course.getHours() < 2 && course.getHours() > 5)
        {
            cout << "Invalid Hours!\n";
        }
        else if (course.getName().size() == 0 && course.getName().size() > 20 && course.getName().size() < 4)
        {
            cout << "Invalid Name\n";
        }
        else 
        {
            return courseRepo.addCourse(course);   
        }   
        return -1;     
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Interface
class TeacherService{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

// Teacher Service impelemntaion 
class TeacherServiceimp : public TeacherService{
private:
    TeacherRepoIMP teacherRepo;
public:
   int addTeacher(Teacher teacher){
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
            return teacherRepo.addTeacher(teacher);
        }    
        return -1;
   }
};
