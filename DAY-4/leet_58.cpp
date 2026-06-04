#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int solve(string s){
    int count=0;
    stringstream ss(s);
    string word,res;
    while(ss >> word){
        res=word;
    }
    count=res.size();
    return count;
}
int main(){
    string s="this is eample of sentence";
    cout<<solve(s);
    return 0;
}