#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v ={1,2,3,4,5,9};
    int k;
    cin>>k;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
    }