#include <iostream>
#include<vector>
using namespace std;
class Queue{
    vector <int>v;
    public:
    void push(int i){
        v.push_back(i);
    }
    void pop(){
        v.erase(v.begin());
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
        }
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"before pop:"<<endl;
    q.display();
    cout<<endl;
    q.pop();
    cout<<"after pop:"<<endl;
        q.display();

}