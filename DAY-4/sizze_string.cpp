#include<iostream>
#include<string>

using namespace std;

/*int main(){
    string s;
    cout<<"enter sting:";
    cin>>s;
    cout<<"size="<<s.size();
}
*/

int size(string s){
    int count=0;
    for(auto ch:s){
        count++;
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    cout<<size(s);
}