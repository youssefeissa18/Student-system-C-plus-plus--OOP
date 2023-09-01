#include "../repo/Repo.cpp"


class StudentService{

public:
   virtual int addStudent(Student student) = 0;
};

class StudentServiceimp : StudentService{
private:
    StudentRepo studentRepo;
public:
    int addStudent(Student student){
        return studentRepo.addStudent(student);
    }
    
};

class CourseService{
public:
    virtual int addCourse(Course course) = 0;
};

class CourseServiceimp : public CourseService{
private:
    CourseRepo courseRepo;
public:
    int addCourse(Course course){
        return courseRepo.addCourse(course);
    }
};

class TeacherService{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

class TeacherServiceimp : public TeacherService{
private:
    TeacherRepo teacherRepo;
public:
   int addTeacher(Teacher teacher){
       return teacherRepo.addTeacher(teacher);
    }
};
