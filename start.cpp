#include <bits/stdc++.h>
// #include "../repo/Repo.cpp"
// #include "model/Models.cpp"
#include "controler/Controler.cpp"
using namespace std;
void ShowList(string Type){
    cout << "\t\t///////////////////////// " << Type << " System ///////////////////////////////" << endl;
    cout << "Please Enter Your Process" <<endl << "1- Add "<< Type << "\n2- Edit "<< Type << "\n3- Remove " << Type << "\n4- Show " << Type << "\n5- Exit"<< endl;
}
void DetermineYourType(){
    cout << "\nPlease Enter Your Type" <<endl << "1- About Student\n2- About Teacher\n3- About Course\n4- Exit"<< endl;
}
void SystemProcess();
int main(){
    cout << "\t\t///////////////////////// Start System //////////////////////////" << endl;
    int choice;
    cout << "Choice\n1- to Start Program\n2- To Terminate the Program\n";
    cin >> choice;
    if (choice == 1)
    {
        SystemProcess();
    }
    else if (choice == 2)
    {
        cout << "\t\t///////////////////////// End System //////////////////////////" << endl;
        exit(0);
    }
    
}
void SystemProcess(){
    int choice;
    int flag = 0;    
    while (true)
    {   
        DetermineYourType();
        cin >> choice;
        switch(choice){
            case 1:{
                ShowList("Student");
                int processnumber;
                cin >> processnumber;
                if (processnumber == 1)
                {
                    cout << "Please Enter Student Data\n";
                    string name;
                    int ID;
                    string PhoneNumber;
                    int Age;
                    double Gpa;
                    Student student;
                    cout << "Student Name :";
                    cin >> name;
                    student.setName(name);
                    cout << "\nStudent Phone Number : ";
                    cin >> PhoneNumber;
                    student.setPhoneNumber(PhoneNumber);
                    cout << "\nStudent Age : ";
                    cin >> Age;
                    student.setAge(Age);
                    cout << "\nStudent Gpa :";
                    cin >> Gpa;
                    student.setGpa(Gpa);
                    cout << "\nStudent ID :";
                    cin >> ID;
                    student.setId(ID);
                    StudentController studentController;
                    cout << student.getName() << "  " << student.getId() << " " << student.getPhoneNumber() <<  " " << student.getAge() << " " << student.getGpa();
                    // studentController.addStudent(student);
                }
                }
                break;
            case 2:
                ShowList("Teacher");
                break;
            case 3:
                ShowList("Course");
                break;
            case 5:
                cout << "Exit\n";
                flag = 1;
                break;
            default:
                cout << "Invalid Choice and Choice the Correct Process\n";
                break;   
        }
        if (flag == 1)
        {
            break;
        }
    }
}