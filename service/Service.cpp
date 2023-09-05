#include "../repo/Repo.cpp"
#include "../validation/Validation.cpp"

////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Interface
class StudentService{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student showStudentByID(int ID) = 0;
};
// Student Service impelemntaion 
class StudentServiceimp{
private:
    StudentRepoIMP studentRepo;
    StudentValidation studentValidation;
    Valdiation valadiation;
    Student studentResult;
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
    Student showStudentByID(int ID){
        studentResult = studentRepo.showStudentByID(ID);
        if (studentResult.getId() == -1)
        {
            valadiation.showValidation("Student",ID);
        }
        return studentResult;
    };
    
};


////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseService{
public:
    virtual int addCourse(Course course) = 0;
    virtual Course showTeacherByID(int ID) = 0;
};

// Course Service impelemntaion 
class CourseServiceimp {
private:
    CourseRepoIMP courseRepo;
    CourseValidation courseValidation;
    Valdiation valadiation;
    Course courseResult;
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
    Course showCourseByID(int ID){
    courseResult = courseRepo.showCourseByID(ID);
        if (courseResult.getId() == -1)
        {
            valadiation.showValidation("Course",ID);
        }
        return courseResult;
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Interface
class TeacherService{
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher showTeacherByID(int ID) = 0;
};

// Teacher Service impelemntaion 
class TeacherServiceimp{
private:
    TeacherRepoIMP teacherRepo;
    TeacherValidation teacherValidation;
    Valdiation valdiation;
    Teacher teacherResult;
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
    Teacher showTeacherByID(int ID){
        teacherResult = teacherRepo.showTeacherByID(ID);
        if (teacherResult.getId() == -1)
        {
            valdiation.showValidation("Teacher",ID);
        }
        return teacherResult;
    }
};
