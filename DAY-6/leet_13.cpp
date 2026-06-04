//Roman to integer
#include<iostream>
#include<unordered_map>
using namespace std;

int RomantoInt(string s){
    unordered_map<char,int>mp;                          //normally, VI=5+1=6 
                                                //but if smaller number comes before larger symbol,we have to subtract
                                                //IV=5-1=4
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;

    int ans=0;
    for(int i=0;i<s.length();i++){
        if(i<s.length()-1 && mp[s[i]]<mp[s[i+1]]){    //compare with nect char,if curent<next,subract current elseadd current
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
        return ans;
    }

}

int main(){
cout<<RomantoInt("MCMXCIV"); //M:1000,C=100 ans=0+1000=1000;
                             //C=100,M=1000 ans=1000-100=900;
                             //M=1000,X=10 ans=900+1000=1900;
                             //X=10,C=100 ans=1900-10=1890
                             //C=100,I=1 ans=1890+100=1990
                             //I=1,V=5 ans=1990-1=1989
                             //V=5 it will goto else ans=1989+5=1994
return 0;
}