// #include <bits/stdc++.h>
// using namespace std;

class Student{

private:
    int id;
    string name;
    string phonenumber;
    float gpa;
    int age;    
    
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
    void setGpa(float id){
        this->gpa = gpa;
    }
    float getGpa(){
        return gpa;
    }
    void setAge(int age){
        this->age = age;
    }
    float getAge(){
        return age;
    }
};