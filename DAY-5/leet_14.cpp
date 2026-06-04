#include<iostream>
#include<vector>
#include<string>

using namespace std;

string longg(vector<string>str){
    string prefix=str[0];
    for(int i=1;i<str.size();i++){
        int j=0;
        while(j<prefix.length()&&j<str[i].length()&&prefix[j]==str[i][j])
    }

}