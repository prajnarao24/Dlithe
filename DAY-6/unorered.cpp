#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,string>mp;
    mp[1]="apple";
    //mp.insert({1,"apple"})
    mp[2]="orange";
    mp[3]="mango";
    mp[4]="water";//if iinsert mango and water for 3,then mango will gt replaced by water

    cout<<mp[1]<<endl;
    cout<<mp[2]<<endl;


    //other way
    for(auto m:mp){
    cout<<m.first<<m.second<<endl;
    }
    return 0;
}