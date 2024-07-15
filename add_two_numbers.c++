#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode();
    ListNode* current = dummyHead;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int x = (l1 != nullptr) ? l1->val : 0;
        int y = (l2 != nullptr) ? l2->val : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;
        if (l1 != nullptr) l1 = l1->next;
        if (l2 != nullptr) l2 = l2->next;
    }    
    return dummyHead->next;
}

int main (void){
    ListNode*head1=new ListNode(9);
    ListNode* t2=new ListNode(9);
    ListNode* t3=new ListNode(9);
    ListNode* t4=new ListNode(9);
    ListNode* t5=new ListNode(9);
    ListNode* t6=new ListNode(9);
    ListNode* t7=new ListNode(9);
    head1->next=t2;
    t2->next=t3;
    t3->next=t4;
    t4->next=t5;
    t5->next=t6;
    t6->next=t7;
    ListNode*head2=new ListNode(9);
    ListNode* h2=new ListNode(9);
    ListNode* h3=new ListNode(9);
    ListNode* h4=new ListNode(9);
    head2->next=h2;
    h2->next=h3;
    h3->next=h4;
    ListNode* tr=new ListNode();
    tr=addTwoNumbers(head1,head2);
    while(tr!=NULL){
        cout<<tr->val;
        tr=tr->next;
    }
    return 0;
};