#include<iostream>
using namespace std;
struct Node
{
    int value;
    Node* next;
    Node():value(0),next(NULL){};
    Node(int x):value(x),next(NULL){};
    Node(int x,Node* next):value(x),next(next){};
};
void mergetwolist(Node* l1,Node* l2){
   Node* tempu=new Node();
   Node* currently=tempu;
   Node* head1=l1;
   Node* head2=l2;
   while(head1!=NULL || head2!=NULL){
        if(head1!=NULL && (head2==NULL || head1->value < head2->value)){
            Node* t=new Node(head1->value);
            currently->next=t;
            currently=currently->next;
            head1=head1->next;
        }
        else{
            Node* t=new Node(head2->value);
            currently->next=t;
            currently=currently->next;
            head2=head2->next;
        }
    }
    cout<<endl;
    Node* mergedList = tempu->next;
    delete tempu; 
    while(mergedList!=NULL){
    cout<< mergedList->value<<"->";
    mergedList=mergedList->next;
    } 
}
int main(void){
    Node* headone=new Node(1);
    Node* h1=new Node(2);
    Node* h2=new Node(4);
    headone->next=h1;
    h1->next=h2;
    Node* current=headone;
    while(current!=NULL){
        cout<<current->value;
        current=current->next;
    }
    Node* headtwo=new Node(1);
    Node* t1=new Node(3);
    Node* t2=new Node(4);
    headtwo->next=t1;
    t1->next=t2;
    current=headtwo;
    cout<<endl;
    while(current!=NULL){
        cout<<current->value;
        current=current->next;
    }
    mergetwolist(headone,headtwo);
    return 0;
}