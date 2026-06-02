#include <bits/stdc++.h>

class fruit{
    public:int apple;
    fruit(int value): apple(value){

    }
    ~fruit(){
        
    }
};
int main(){
    fruit d(5);
    std:: cout<<d.apple;
    return 1;
}