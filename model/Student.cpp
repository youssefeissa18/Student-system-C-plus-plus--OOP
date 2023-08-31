
#include "BaseEntity.cpp"


class Student : public BaseEntity{

private:
    float gpa;    
    
public:
    // setters and getters 
    void setGpa(float id){
        this->gpa = gpa;
    }
    float getGpa(){
        return gpa;
    }
};