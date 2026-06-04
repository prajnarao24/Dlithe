//restore IP Address
#include<iostream>
#include<vector>
#include<string>

using namespace std;
class solution{
    public:vector<string>ans;
    void solve(string s,int index,int pparts,string current){
        if(parts==4&& index==s.length()){
            current.pop_back();
            ans.push_back(current);
        return;
    }

    if(parts>4){
        return;
    }

    for(int len=1;len<=3&&index+len<=s.length();len++){
        string part=s.substr(index,len);
    }
}}