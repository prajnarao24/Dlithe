#include<iostream>
#include<string>

using namespace std;

int find(string str,string target){
    for(int i=0;i<=str.size();i++){
        if(str[i]==target[0]){
            return i;
        }
    }
    return -1;
}

int main(){
    string str;
    string target;
    cout<<"Enter string";
    cin>>str;
    cout<<"enter target";
    cin>>target;
    cout<<find(str,target);
return 0;
}