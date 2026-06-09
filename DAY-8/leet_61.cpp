#include<iostream>
using namespace std;

Node* func(Node* head,int k){
    int* fast=head;

    int n=0;
    while(fast){
        fast=fast->next;
        n++;
    }
    k=k%n;
    for(int i=0;i<n-k;i++){
        fast=fast->next;
    }
    head=fast->next;
    fast->next=nullptr;
    return head;
}
int main(){
    
}