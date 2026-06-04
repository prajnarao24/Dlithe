#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int num=1234567;
    while(num>0){
        int d=num%10;
        sum=sum+d;
        num=num/10;
    }
    cout<<sum;
    return 0;
}