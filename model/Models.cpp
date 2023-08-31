#include <bits/stdc++.h>
using namespace std;


// Create Model BaseEntity
class BaseEntity{
private:
    int id;
    string name;
    string phonenumber;
    int age; 

public:
    void setId(int id){
        this->id = id;
    }
    int getId(){
        return id;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setPhoneNumber(string phonenumber){
        this->phonenumber = phonenumber;
    }
    string getPhoneNumber(){
        return phonenumber;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }

};

// Create Model Teacher
class Teacher : public BaseEntity{

private:
    double salary;    
    int studentIds[100];
public:
    // setters and getters 
    void setSalary(double salary){
        this->salary = salary;
    }
    double getSalary(){
        return salary;
    }
    void setstudents(int studentIds[100]){
        for (int i = 0; i < 100; i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }
    int *getstudents(){
        return studentIds;
    }
};

// Create Model Student

class Student : public BaseEntity{

private:
    float gpa;    
    Teacher teachers[5];
public:
    // setters and getters 
    void setGpa(float id){
        this->gpa = gpa;
    }
    float getGpa(){
        return gpa;
    }
    void setTeacher(Teacher teachers[5]){
        for (int i = 0; i < 5; i++)
        {
            this->teachers[i] = teachers[i];
        }
    }
    Teacher *getteacher(){
        return teachers;
    }
};
