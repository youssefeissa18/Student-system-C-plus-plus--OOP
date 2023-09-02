#include <bits/stdc++.h>
// #include "controler/Controler.cpp"
using namespace std;
void ShowList(string Type){
    cout << "Please Enter Your Process" <<endl << "1- Add "<< Type << "\n2- Edit "<< Type << "\n3- Remove " << Type << "\n4- Show " << Type << "\n5- Exit"<< endl;
}
void DetermineYourType(){
    cout << "\nPlease Enter Your Type" <<endl << "1- About Student\n2- About Teacher\n3- About Course\n4- Exit"<< endl;
}
void SystemProcess();
int main(){
    cout << "\t\t///////////////////////// Student System /////////////////////////" << endl;
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
            case 1:
                ShowList("Student");
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