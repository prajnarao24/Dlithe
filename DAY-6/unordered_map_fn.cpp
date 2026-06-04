#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,string>mp;
    mp.insert({1,"apple"});
    mp.insert({2,"banana"});
    cout<<mp.size()<<endl;
    cout<<mp.count(1)<<endl;
    if(mp.find(2)!=mp.end()){
        cout<<"found"<<endl;
        mp.erase(1); //removes the key and the value
    }
    return 0;

//mp.empty() ->returns true if map has no eement

}