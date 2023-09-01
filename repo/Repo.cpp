#include "../model/Models.cpp"
#include <bits/stdc++.h>
using namespace std;

// Interface: mean this class for prototype only without implemntion and the body in this class StudentRepoIMP
////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Interface
class StudentRepo{
public:
    virtual void addStudent(Student student) = 0;
};

// Create StudentRepoIMP 
class StudentRepoIMP : public StudentRepo{
private:
    Student students[25];
    int index = 0;
public: 
    void addStudent(Student student){
        if(index == 25)
        {
            cout << "Full Student\n";
        }
        else
        {
            students[index] = student;
            index++;
        }
    }
};

////////////////////////////////////////// Teacher ///////////////////////////////////////////////////////////
// Interface
class TeacherRepo{
public: 
    virtual void addTeacher(Teacher teacher) = 0;
};

// Create TeacherRepoIMP 
class TeacherRepoIMP : public TeacherRepo{
private:
    Teacher teachers[25];
    int index = 0;
public: 
    void addTeacher(Teacher teacher){
        if(index == 25)
        {
            cout << "Full Teacher\n";
        }
        else
        {
            teachers[index] = teacher;
            index++;
        }
    }
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseRepo{
public: 
    virtual void addCourse(Course course) = 0;
};

// Create CourseRepoIMP 
class CourseRepoIMP : public CourseRepo{
private:
    Course courses[25];
    int index = 0;
public: 
    void addCours(Course course){
        if(index == 25)
        {
            cout << "Full Course\n";
        }
        else
        {
            courses[index] = course;
            index++;
        }
    }
};