#include <iostream>
using namespace std;

void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n*2;j++)
        {
            if(j==i||j==n*2-i){
                cout<<"*";
        }
    else{
        cout<<" ";
    }
}
    cout<<endl;
    }
}


int main(){
   int n;
   cin>>n;
   print(n);
}