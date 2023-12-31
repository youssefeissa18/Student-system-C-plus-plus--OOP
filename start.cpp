#include <bits/stdc++.h>
// #include "../repo/Repo.cpp"
// #include "model/Models.cpp"
#include "controler/Controler.cpp"
using namespace std;
void ShowList(string Type);
void DetermineYourType();
void addStudent();
void addTeacher();
void addCourse();
void SystemProcess();
void SwitchStudent();
void SwitchTeacher();
void SwitchCourse();
void showStudentByID();
void showCourseByID();
void showTeacherByID();
void editStudent();
void editCourse();
void editTeacher();
int processnumber;
int choice;
int flag = 0;
int ID;
int id;
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
    cout << "Please Enter Your Process" <<endl << "1- Add "<< Type << "\n2- Remove "<< Type << "\n3- Edit " << Type << "\n4- Show " << Type << "\n5- Show " << Type << " By ID" << "\n6- Back to Home Screen"<< endl;
}

void SystemProcess(){ // MAIN
    while (true)
    {   
        DetermineYourType();
        cin >> choice;
        switch(choice){
            case 1:{
                ShowList("Student");
                cin >> processnumber;
                SwitchStudent();
                }
                break;
            case 2:
                ShowList("Teacher");
                cin >> processnumber;
                SwitchTeacher();
                break;
            case 3:
                ShowList("Course");
                cin >> processnumber;
                SwitchCourse();
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

void SwitchStudent(){
    switch (processnumber)
    {
    case 1:
        addStudent();
        break;
    case 2:
        cout << "Remove Student" << endl;
        break;
    case 3:
        editStudent();
        break;
    case 4:
        cout << "Show Student" << endl;
        break;
    case 5:
        showStudentByID();
        break;
    case 6:
        cout << "Back to operation process" << endl;
        break;
    default:
        cout << "Invalid Choice and Choice the Correct Process\n";
        break;
    }
}

void SwitchTeacher(){
    switch (processnumber)
    {
    case 1:
        addTeacher();
        break;
    case 2:
        cout << "Remove Teacher" << endl;
        break;
    case 3:
        editTeacher();
        break;
    case 4:
        cout << "Show Teacher" << endl;
        break;
    case 5:
        showTeacherByID();
        break;
    case 6:
        cout << "Back to operation process" << endl;
        break;
    default:
         cout << "Invalid Choice and Choice the Correct Process\n";
        break;
    }
}

void SwitchCourse(){
    switch (processnumber)
    {
    case 1:
        addCourse();
        break;
    case 2:
        cout << "Remove Course" << endl;
        break;
    case 3:
        editCourse();
        break;
    case 4:
        cout << "Show Course" << endl;
        break;
    case 5:
        showCourseByID();
        break;
    case 6:
        cout << "Back to operation process" << endl;
        break;
    default:
        cout << "Invalid Choice and Choice the Correct Process\n";
        break;
    }
}

void addStudent(){
    Student student;
    cout << "Please Enter Student Data\n";
    cout << "Student Name : ";
    string name;
    cin >> name;
    student.setName(name);
    cout << "\nStudent Phone Number : ";
    string PhoneNumber;
    cin >> PhoneNumber;
    student.setPhoneNumber(PhoneNumber);
    cout << "\nStudent Age : ";
    int Age;
    cin >> Age;
    student.setAge(Age);
    cout << "\nStudent Gpa : ";
    double Gpa;
    cin >> Gpa;
    student.setGpa(Gpa);
    StudentController studentController;
    ID = studentController.addStudent(student);
    if (ID != -1)
    {
        cout << "Successor Add Student with ID : ["<< ID << "]" << endl;
    }
}

void addTeacher(){
    Teacher teacher;
    cout << "Please Enter Teacher Data\n";
    cout << "Teacher Name : ";
    string name;
    cin >> name;
    teacher.setName(name);
    cout << "\nTeacher Phone Number : ";
    string PhoneNumber;
    cin >> PhoneNumber;
    teacher.setPhoneNumber(PhoneNumber);
    cout << "\nTeacher Age : ";
    int Age;
    cin >> Age;
    teacher.setAge(Age);
    cout << "\nTeacher salary : ";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    ID = teacherController.addTeacher(teacher);
    if (ID != -1)
    {   
        cout << "Successor Add Teacher with ID : ["<< ID << "]" << endl;
    }
    
}

void addCourse(){
    Course course;
    cout << "Please Enter course Data\n";
    cout << "Course Name : ";
    string name;
    cin >> name;
    course.setName(name);
    cout << "\nCourse Hours : ";
    int hours;
    cin >> hours;
    course.setHours(hours);
    CourseController courseController;
    ID = courseController.addCourse(course);
    if (ID != -1)
    {
       cout << "Successor Add Course with ID : ["<< ID << "]" << endl; 
    }   
}

void showStudentByID() {
	cout<<"Enter Student Id :";
	cin>>id;
	StudentController studentController;
	studentController.showStudentByID(id);
}

void showCourseByID() {
	cout<<"Enter Course Id :";
	cin>>id;
	CourseController courseController;
	courseController.showCourseByID(id);
}

void showTeacherByID() {
	cout<<"Enter Teacher Id :";
	cin>>id;
	TeacherController teacherController;
	teacherController.showTeacherByID(id);
}

void editStudent(){
	cout<<"Please Enter New Data for Student: "<<endl;
	Student student;
	cout<<"Enter Old Student ID :";
	cin>>id;
	student.setId(id);
	cout<<"Enter Student Name :";
	string name;
	cin>>name;
	student.setName(name);
	cout<<"Enter Student Age :";
	int age;
	cin>>age;
	student.setAge(age);
	cout<<"Enter Student PhoneNumber :";
	string phoneNumber;
	cin>>phoneNumber;
	student.setPhoneNumber(phoneNumber);
	cout<<"Enter Student GPA :";
	double gpa;
	cin>>gpa;
	student.setGpa(gpa);
	StudentController studentController;
	studentController.updateStudent(student);
}

void editCourse(){
	Course course;
	cout<<"Please Enter New Data for Course : "<<endl;
	cout<<"Enter Old Course ID :";
	cin>>id;
	course.setId(id);
	cout<<"Enter Course Name :";
	string name;
	cin>>name;
	course.setName(name);
	cout<<"Enter Course hour :";
	double hour;
	cin>>hour;
	course.setHours(hour);
	CourseController courseController;
	courseController.updateCourse(course);
}

void editTeacher(){
	cout<<"Please Enter New Data for Teacher : "<<endl;
	Teacher teacher;
	cout<<"Enter Old Teacher ID :";
	cin>>id;
	teacher.setId(id);
	cout<<"Enter Teacher Name :";
	string name;
	cin>>name;
	teacher.setName(name);
	cout<<"Enter Teacher Age :";
	int age;
	cin>>age;
	teacher.setAge(age);
	cout<<"Enter Teacher PhoneNumber :";
	string phoneNumber;
	cin>>phoneNumber;
	teacher.setPhoneNumber(phoneNumber);
	cout<<"Enter Teacher Salary :";
	double salary;
	cin>>salary;
	teacher.setSalary(salary);
	TeacherController teacherController;
	teacherController.updateTeacher(teacher);
}
