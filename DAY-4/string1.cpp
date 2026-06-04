#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int solve(string s){
    stringstream ss(s);
    string word;
    string res=" ";
    while(ss >> word){
        if(res==""){
            res=word;

        }else{
            res=word+res;
        }
        return res;
    }
}
    int main(){
        string s="the sky is blue";
        cout<<solve(s);
        return 0;
}