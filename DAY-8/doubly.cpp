#include<iostream>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node* prev;
    Node* next;

    Node(auto val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }

    void traverse(Node* head){
        while(head){
            cout<<head->data>>"->";
            head=head->next;
    
    }
    cout<<"null";
}
    void addstart(Node* &head,int val){
        Node* n=new Node(val);
        head->next=head;
        head=n;
        traverse(head);
    }
    void addend(Node* head,int val){
        Node* newNode=new Node(val);
        if(!head){
            head=newNode;
        }
        Node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
    }
};
    int main(){
        Node* head;
        Node* n1=new Node(5);
        head=n1;
        Node* n2=new Node(10);
        n1->next=n2;
        n2->prev=n1;
        Node* n3=new Node(15);
        n2->next=n3;
        n3->prev=n2;
        Node* n4=new Node(20);
        n3->next=n4;
        n4->prev=n3;





        return 7;
    }
   