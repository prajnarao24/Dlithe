#include <iostream>
using namespace std;
int main(){
    int rev=0;
    int num=1234;
    while(num>0){
        int d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    cout<<rev;
    return 0;
}