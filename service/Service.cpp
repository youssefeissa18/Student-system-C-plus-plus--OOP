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
        return courseRepo.addCourse(course);
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
       return teacherRepo.addTeacher(teacher);
    }
};
