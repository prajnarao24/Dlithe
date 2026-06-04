//longest substring without repeating
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int lengthOfstring(String){
int right=0,left=0;
int cnt[128]={0};int maxi=0;

for(right;right<s.size();right++){
    cnt[s[right]]++;
    while(cnt[s[right]]>1){
        cnt[s[left]]--;left;
    }
    maxi=max(maxi,right-left+1);

    }
    return maxi;
}