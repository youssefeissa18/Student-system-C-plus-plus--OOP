#include <bits/stdc++.h>
using namespace std;

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