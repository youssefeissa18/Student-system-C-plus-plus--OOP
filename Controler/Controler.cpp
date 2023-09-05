#include "../service/Service.cpp"

////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Student Controller impelemntaion
class StudentController{
private:
    StudentServiceimp studentService;
    Student student;
public:
    int addStudent(Student student){
        return studentService.addStudent(student);
    }
    void showStudentByID(int ID){
        student = studentService.showStudentByID(ID);
        if (student.getId() != -1)
        {
            cout << "\t\tID\tname\t\tPhone Number\t\tGPA\t\tAge\n";
            cout << "\t\t" << student.getId() << "\t" << student.getName() << "\t\t" << student.getPhoneNumber() << "\t\t" << student.getGpa() << "\t\t" << student.getAge() << endl;
        }
        
    }
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Course Controller impelemntaion
class CourseController{
private:
    CourseServiceimp courseService;
    Course course;
public: 
    int addCourse(Course course){
        return courseService.addCourse(course);
    }
    void showCourseByID(int ID){
        course = courseService.showCourseByID(ID);
        if (course.getId() != -1)
        {
            cout << "\t\tID\tname\t\tHours" << endl;
            cout << "\t\t" << course.getId() << "\t\t" << course.getName() << "\t\t" << course.getHours() << endl;
        }
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Teacher Controller impelemntaion
class TeacherController{
private:
    TeacherServiceimp teacherService;
    Teacher teacher;
public:
    int addTeacher(Teacher teacher){
        return teacherService.addTeacher(teacher);
    }
    void showTeacherByID(int ID){
       teacher = teacherService.showTeacherByID(ID);
       if (teacher.getId() != -1)
        {
            cout << "\t\tID\tname\t\tPhone Number\t\tsalary\t\tAge\n";
            cout << "\t\t" << teacher.getId() << "\t\t" << teacher.getName() << "\t\t" << teacher.getPhoneNumber() << "\t\t" << teacher.getSalary() << "\t\t" << teacher.getAge() << endl;
        }        
    }
};
