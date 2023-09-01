#include "../service/Service.cpp"

////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Student Controller impelemntaion
class StudentController{
private:
    StudentService studentService;
public:
    int addStudent(Student student){
        return studentService.addStudent(student);
    }
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Course Controller impelemntaion
class CourseController{
private:
    CourseService courseService;
public:
    int addCourse(Course course){
        return courseService.addCourse(course);
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Teacher Controller impelemntaion
class TeacherController{
private:
    TeacherService teacherService;
public:
    int addTeacher(Teacher teacher){
        return teacherService.addTeacher(teacher);
    }
};
