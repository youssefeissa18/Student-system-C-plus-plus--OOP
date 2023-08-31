
#include "BaseEntity.cpp"



class Teacher : public BaseEntity{

private:
    double salary;    
    
public:
    // setters and getters 
    void setSalary(double salary){
        this->salary = salary;
    }
    double getSalary(){
        return salary;
    }
};