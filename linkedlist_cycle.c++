#include<iostream>
using namespace std;
struct linkedlist{
    int data;
    linkedlist* next;
};
bool cycle(linkedlist* head){
    if(head->next==NULL){
        return false;
    }
    linkedlist* slow = head;
    linkedlist* fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
    
}
int main(void){
    linkedlist* head= new linkedlist();
    linkedlist* second = new linkedlist();
    linkedlist* third = new linkedlist();
    linkedlist* forth = new linkedlist();
    head->data = 3;
    second->data = 2; 
    third->data = 0;  
    forth->data=-4;
  
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = second;
    bool ans=cycle(head);
    cout<<ans;
    return 0;
}