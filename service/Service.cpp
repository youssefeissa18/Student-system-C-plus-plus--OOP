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
        return studentRepo.addStudent(student);
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
