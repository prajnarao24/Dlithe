#include <iostream>
using namespace std;
int main(){
    int rev=0;
    int num=12344321;
    int temp=num;
    while(num>0){
        int d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(temp==rev){
        cout<<"palindrome";
        }
        else{
            cout<<"not palindrome";
        }
}