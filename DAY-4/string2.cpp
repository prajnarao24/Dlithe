#include<iostream>
#include<string>

using namespace std;
int main(){
    string name;
    string department;
    string classno;
    getline(cin,name);
    getline(cin,department);
    getline(cin,classno);

    cout<<"name:"<<name<<endl;
    cout<<"department:"<<department<<endl;
    cout<<"classno:"<<classno<<endl;
    return 0;
}