#include <bits/stdc++.h>
// #include "../repo/Repo.cpp"
// #include "model/Models.cpp"
#include "controler/Controler.cpp"
using namespace std;
void ShowList(string Type);
void DetermineYourType();
void addStudent();
void SystemProcess();
int processnumber;
int choice;
int flag = 0;
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
void DetermineYourType(){
    cout << "\nPlease Enter Your Type" <<endl << "1- About Student\n2- About Teacher\n3- About Course\n4- Back to Start Menu"<< endl;
}

void ShowList(string Type){
    cout << "\t\t///////////////////////// " << Type << " System ///////////////////////////////" << endl;
    cout << "Please Enter Your Process" <<endl << "1- Add "<< Type << "\n2- Edit "<< Type << "\n3- Remove " << Type << "\n4- Show " << Type << "\n5- Back to Home Screen"<< endl;
}

void SystemProcess(){
    while (true)
    {   
        DetermineYourType();
        cin >> choice;
        switch(choice){
            case 1:{
                ShowList("Student");
                cin >> processnumber;
                switch (processnumber)
                {
                case 1:
                    addStudent();
                    break;
                case 2:
                    cout << "Remove Student" << endl;
                    break;
                case 3:
                    cout << "Edit Student" << endl;
                    break;
                case 4:
                    cout << "Show Student" << endl;
                    break;
                case 5:
                    cout << "Back to operation process" << endl;
                    break;
                default:
                    cout << "Invalid Choice and Choice the Correct Process\n";
                    break;
                }
                }
                break;
            case 2:
                ShowList("Teacher");
                cin >> processnumber;
                switch (processnumber)
                {
                case 1:
                    cout << "Add Teacher" << endl;
                    break;
                case 2:
                    cout << "Remove Teacher" << endl;
                    break;
                case 3:
                    cout << "Edit Teacher" << endl;
                    break;
                case 4:
                    cout << "Show Teacher" << endl;
                    break;
                case 5:
                    cout << "Back to operation process" << endl;
                    break;
                default:
                    cout << "Invalid Choice and Choice the Correct Process\n";
                    break;
                }
                break;
            case 3:
                ShowList("Course");
                cin >> processnumber;
                switch (processnumber)
                {
                case 1:
                    cout << "Add Course" << endl;
                    break;
                case 2:
                    cout << "Remove Course" << endl;
                    break;
                case 3:
                    cout << "Edit Course" << endl;
                    break;
                case 4:
                    cout << "Show Course" << endl;
                    break;
                case 5:
                    cout << "Back to operation process" << endl;
                    break;
                default:
                    cout << "Invalid Choice and Choice the Correct Process\n";
                    break;
                }
                break;
            case 4:
                cout << "Exit\n";
                flag = 1;
                break;
            default:
                cout << "Invalid Choice and Choice the Correct Process\n";
                break;   
        }
        if (flag == 1)
        {
            main();
        }
    }
}

void addStudent(){
    cout << "Please Enter Student Data\n";
    string name;
    int ID;
    string PhoneNumber;
    int Age;
    double Gpa;
    Student student;
    cout << "Student Name : ";
    cin >> name;
    student.setName(name);
    cout << "\nStudent Phone Number : ";
    cin >> PhoneNumber;
    student.setPhoneNumber(PhoneNumber);
    cout << "\nStudent Age : ";
    cin >> Age;
    student.setAge(Age);
    cout << "\nStudent Gpa : ";
    cin >> Gpa;
    student.setGpa(Gpa);
    StudentController studentController;
    ID = studentController.addStudent(student);
    cout << "Successor Add with ID : ["<< ID << "]" << endl;
}
