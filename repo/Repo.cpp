#include "../model/Models.cpp"
#include <bits/stdc++.h>
using namespace std;

// Static Data
class Data{
public:
    static Student students[25];
    static int indexStudent;
    static int IDStudent;
    static Course courses[25];
    static int indexCourse;
    static int IDCourse;
    static Teacher teachers[25];
    static int indexTeacher;
    static int IDTeacher;
};
// init static data
Student Data::students[25];
Course Data::courses[25];
Teacher Data::teachers[25];
int Data::indexStudent = 0;
int Data::indexCourse = 0;
int Data::indexTeacher = 0;
int Data::IDStudent = 1;
int Data::IDTeacher = 1;
int Data::IDCourse = 1;

// Interface: mean this class for prototype only without implemntion and the body in this class TypeRepoIMP
////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Interface
class StudentRepo{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student showStudentByID(int ID) = 0;
};

// Create StudentRepoIMP 
class StudentRepoIMP : public StudentRepo{
private:
    Data data;
    Student invalidstudent;
public: 
    int addStudent(Student student){
        if(data.indexStudent == 25)
        {
            return -1;
        }
        else
        {
            student.setId(data.IDStudent++);
            data.students[data.indexStudent] = student;
            data.indexStudent++;
        }
        return student.getId();
    }
    Student showStudentByID(int ID){
        for (int i = 0; i < data.indexStudent; i++)
        {
            if (data.students[i].getId() == ID)
            {
                return data.students[i];
            }
        }
        invalidstudent.setId(-1);
        return invalidstudent;   
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Interface
class TeacherRepo{
public: 
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher showTeacherByID(int ID) = 0;
};

// Create TeacherRepoIMP 
class TeacherRepoIMP : public TeacherRepo{
private:
    Data data;
    Teacher invalidteacher;
public: 
    int addTeacher(Teacher teacher){
        if(data.indexTeacher == 25)
        {
            return -1;
        }
        else
        {
            teacher.setId(data.IDTeacher++);
            data.teachers[data.indexTeacher] = teacher;
            data.indexTeacher++;
        }
        return teacher.getId();
    }
    Teacher showTeacherByID(int ID){
        for (int i = 0; i < data.indexTeacher; i++)
        {
            if (data.teachers[i].getId() == ID)
            {
                return data.teachers[i];
            }
        }
        invalidteacher.setId(-1);
        return invalidteacher;   
    }
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseRepo{
public: 
    virtual int addCourse(Course course) = 0;
    virtual Course showCourseByID(int ID) = 0;
};

// Create CourseRepoIMP 
class CourseRepoIMP : public CourseRepo{
private:
    Data data;
    Course invalidCourse;
public: 
    int addCourse(Course course){
        if(data.indexCourse == 25)
        {
            return -1;
        }
        else
        {
            course.setId(data.IDCourse++);
            data.courses[data.indexCourse] = course;
            data.indexCourse++;
        }
        return course.getId();
    }
    Course showCourseByID(int ID){
        for (int i = 0; i < data.indexCourse; i++)
        {
            if (data.courses[i].getId() == ID)
            {
                return data.courses[i];
            }
        }
        invalidCourse.setId(-1);
        return invalidCourse;   
    }
};