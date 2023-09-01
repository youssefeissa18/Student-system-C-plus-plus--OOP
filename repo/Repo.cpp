#include "../model/Models.cpp"
#include <bits/stdc++.h>
using namespace std;

// Interface: mean this class for prototype only without implemntion and the body in this class StudentRepoIMP
////////////////////////////////////////// Student ///////////////////////////////////////////////////////////
// Interface
class StudentRepo{
public:
    virtual void addStudent(Student student);


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
private:

public: 



};

// Create TeacherRepoIMP 
class TeacherRepoIMP : public TeacherRepo{
private:

public: 
};

////////////////////////////////////////// Course ///////////////////////////////////////////////////////////
// Interface
class CourseRepo{
private:

public: 



};

// Create CourseRepoIMP 
class CourseRepoIMP : public CourseRepo{
private:

public: 
};