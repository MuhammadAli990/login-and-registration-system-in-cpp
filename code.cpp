#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void saveusername(string username){
    ofstream file("data\\username.txt");
    if(file.is_open()){
        file<<username;
        cout<<"Username has been saved successfully"<<endl;
        file.close();
    }
    else{
        cout<<"Username not saved.\nError 404 saving directory not found."<<endl;
    }
}
void savepass(string pass){
    ofstream file("data\\password.txt");
    if(file.is_open()){
        file<<pass;
        cout<<"Password has been saved successfully"<<endl;
        file.close();
    }
    else{
        cout<<"Password not saved.\nError 404 saving directory not found."<<endl;
    }
}
void signup(){
    string username,password;
    cout<<"Enter your username: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;
    saveusername(username);
    savepass(password);
}
string checkusername(){
    string usernamec;
    ifstream file("data\\username.txt");
    if(file.is_open()){
        while (getline(file, usernamec)) {
        }
        file.close();
    }
    return usernamec;
}
string checkpassword(){
    string passwordc;
    ifstream file("data\\password.txt");
    if(file.is_open()){
        while (getline(file, passwordc)) {
        }
        file.close();
    }
    return passwordc;
}
void signin(){
    string username,usernamec;
    string password,passwordc;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter your password: ";
    cin>>password;
    usernamec=checkusername();
    passwordc=checkpassword();
    if(username==usernamec && password==passwordc){
        cout<<"Login successful.";
    }
    else{
        cout<<"Wrong username or password.";
    }
}

int main(){
    int choice;
    cout<<"Press 1 to sign up."<<endl;
    cout<<"Press 2 to sign in."<<endl;
    cout<<"Press 3 to exit."<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"Signup:"<<endl;
        signup();
    }
    if (choice==2){
        cout<<"Signin:"<<endl;
        signin();
    }
    if(choice==3){
        return 0;
    }
}