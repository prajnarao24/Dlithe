#include <iostream>
using namespace std;

void Register(){
int userId;
char name;
cout<<"enter userId";
cin>>userId;
cout<<"enter name";
cin>>name;
}

void Login(){
    int userId;
    char password;
    cout<<"Enter userid";
    cin>>userId;
    cout<<"enter password:";
    cin>>password;
}

void AdminLogin(){
    int userId;
    char password;
    cout<<"Enter adminid";
    cin>>userId;
    cout<<"enter password:";
    cin>>password;
}

void Logout(){
    cout<<"logged out succesfully";
}

int main() {
    int ch;
      do{
    cout<<"Enter choice:\n1:Register\n2:Login\n3.Admin Login\n4.Logout\n";
    cin>>ch;
  
    switch(ch){
        case 1:
            Register();
            break;
        case 2:
            Login();
            break;
        
     case 3:
            AdminLogin();
            break;
   case 4:
            Logout();
            break;
        case 5:exit(0);
        
    default: cout<<"invalid";
    break;
        }
    }
    while(true);

    return 0;
}