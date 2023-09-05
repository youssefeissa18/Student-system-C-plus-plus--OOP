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
};

// Create StudentRepoIMP 
class StudentRepoIMP : public StudentRepo{
private:
    Data data;
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
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Interface
class TeacherRepo{
public: 
    virtual int addTeacher(Teacher teacher) = 0;
};

// Create TeacherRepoIMP 
class TeacherRepoIMP : public TeacherRepo{
private:
    Data data;
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
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseRepo{
public: 
    virtual int addCourse(Course course) = 0;
};

// Create CourseRepoIMP 
class CourseRepoIMP : public CourseRepo{
private:
    Data data;
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
};