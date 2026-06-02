#include <iostream>
using namespace std;
int main(){
    float sum(int a,int b){
        return a+b;
    }
    int sum(int a,int b){
        return a+b;
    }
    char sum(char a,char b){
        return a+b;
    }
}