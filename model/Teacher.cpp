// #include <bits/stdc++.h>
// using namespace std;

class Student{

private:
    string name;
    string phonenumber;
    string subject;
    int id;
    int age;
    double salary;    
    
public:
    // setters and getters 
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
    void setSubject(string subject){
        this->subject= subject;
    }
    float getSubject(){
        return subject;
    }
    void setAge(int age){
        this->age = age;
    }
    float getAge(){
        return age;
    }
    void setSalary(double salary){
        this->age = age;
    }
    double getSalary(){
        return salary;
    }
};