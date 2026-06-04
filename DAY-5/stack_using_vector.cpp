#include <iostream>
#include<vector>
using namespace std;

class stack{
    vector<int>v;

    public:

    void push(int x){
        v.push_back(x);
    }

    void pop(){
        v.pop_back();
    }

    void dipslay(){
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<endl;
        }
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"before pop:"<<endl;
    s.dipslay();
    s.pop();
    cout<<"after pop:"<<endl;
    s.dipslay();
    return 0;
}