#include <iostream>
using namespace std;

template<typename T>
T sum(T a,T b){
    return a+b;

}

int main(){
    int a=5;
    int b=7;
    cout<<sum(5, 4)<<endl;
    cout<<sum(5.5, 4.6)<<endl; 
    //here we can pass same datatype values,so to ovecome this we can use 
    /*template<typename T,typename K>
      T sum(T a,K b){
      return a+b;
      }*/
      

  /* auto
    auto sum(auto a,auto b){
        return a+b
    }*/
    cout<<sum(a, b)<<endl;


}
