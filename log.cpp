#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

class temp{
    string userName,Email,password;
    string searchName,searchPass,searchEmail;
    fstream file;
    public:
    void login();
    void signUP();
    void forgot();
}obj;

int main(){
    char choice;
    cout<<"\n1- Login";
    cout<<"\n2- Sign-Up";
    cout<<"\n3- Forgot Password";
    cout<<"\n4- Exit";
    cout<<"\nEnter Your Choice :: ";
    cin>>choice;

    switch(choice){
        case '1':
            cin.ignore();
            obj.login();
        break;
        case '2':
            cin.ignore();
            obj.signUP();
        break;
        case '3':
            cin.ignore();
            obj.forgot();
        break;
        case '4':
            return 0;
        break;
        defualt:
            cout<<"Invalid Selection...!";
    }
}
void temp :: signUP(){
    cout<<"\nEnter Your User Name :: ";
    getline(cin,userName);
    cout<<"Enter Your Email Address :: ";
    getline(cin,Email);
    cout<<"Enter Your Password :: ";
    getline(cin,password);

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<userName<<"*"<<Email<<"*"<<password<<endl;
    file.close();
}
void temp::login() {
    cout << "\t\t\t----------LOGIN---------" << endl;
    cout << "\t\t\tEnter Your User Name :: ";
    getline(cin, searchName);
    cout << "\t\t\tEnter Your Password :: ";

    // Password masking using getch()
    char ch;
    searchPass = "";
    while (true) {
        ch = getch();  // Get character from user input without showing it
        if (ch == 13)  // Enter key (ASCII value 13)
            break;
        else if (ch == 8) {  // Backspace key (ASCII value 8)
            if (searchPass.length() > 0) {
                searchPass.pop_back();  // Remove last character from password
                cout << "\b \b";  // Backspace in console to erase the last character
            }
        } else {
            searchPass.push_back(ch);  // Add character to password string
            cout << "*";  // Print '*' to mask the character
        }
    }

    cout << endl;  // For better readability after password input

    file.open("loginData.txt", ios::in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');

    while (!file.eof()) {
        if (userName == searchName) {
            if (password == searchPass) {
                cout << "\nAccount Login Successful...!" << endl;
                cout << "\nUsername :: " << userName << endl;
                cout << "\nEmail :: " << Email << endl;
                break;
            } else {
                cout << "\t\t\tPassword is Incorrect...!" << endl;
                break;
            }
        }
        getline(file, userName, '*');
        getline(file, Email, '*');
        getline(file, password, '\n');
    }

    if (file.eof()) {
        cout << "\t\t\tUser not found!" << endl;
    }

    file.close();
    main();
}

void temp :: forgot(){
    cout<<"\nEnter Your UserName :: ";
    getline(cin,searchName);
    cout<<"\nEnter Your Email Address :: ";
    getline(cin,searchEmail);

    file.open("loginData.txt",ios :: in);
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    while(!file.eof()){
        if(userName == searchName){
            if(Email == searchEmail){
                cout<<"\nAccount Found...!"<<endl;
                cout<<"Your Password :: "<<password<<endl;
            }else{
                cout<<"Not found...!\n";
            }
        }else{
            cout<<"\nNot fount...!\n";
        }
    getline(file,userName,'*');
    getline(file,Email,'*');
    getline(file,password,'\n');
    }
    file.close();
}
