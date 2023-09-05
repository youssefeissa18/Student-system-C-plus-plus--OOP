#include "../repo/Repo.cpp"
#include "../validation/Validation.cpp"

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
    StudentValidation studentValidation;
    Valdiation valadiation;
public:
    int addStudent(Student student){
        if (studentValidation.validateFunc(student) == 1)
        {
            int ID = studentRepo.addStudent(student);
            if (ID == -1)
            {
                valadiation.FullData("Student");
            }
            else
            {
                return ID;
            }
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
    CourseValidation courseValidation;
    Valdiation valadiation;
public:
    int addCourse(Course course){
        if (courseValidation.validateFunc(course) == 1)
        {
            int ID = courseRepo.addCourse(course);
            if (ID == -1)
            {
                valadiation.FullData("Course");
            }
            else
            {
                return ID;
            }
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
    TeacherValidation teacherValidation;
    Valdiation valdiation;
public:
   int addTeacher(Teacher teacher){
        if (teacherValidation.validateFunc(teacher) == 1)
        {
            int ID = teacherRepo.addTeacher(teacher);
            if (ID == -1)
            {
                valdiation.FullData("teacher");
            }
            else
            {
                return ID;
            }
        }    
        return -1;
   }
};
