//repeated substring
#include<iostream>
#include<string>

using namespace std;

bool lc45(string s){
    string doubled=s+s;
    string trimmed=doubled.substr(1,doubled.size()-2);
    if(trimmed.find(s)!=string::npos)return true;
    else false;
}


int main(){
    

}