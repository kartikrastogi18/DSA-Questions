/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
     ListNode*temp=head;
     int s=1;
     while(temp->next!=NULL){
        s++;
        temp=temp->next;
     }
    ListNode*temp1=head;
    if (n == s-1) { 
        if(temp1->next->next!=nullptr){
            ListNode*dummy=temp1->next;
            temp1->next=temp1->next->next;
            delete dummy;
            return head;
        }
    ListNode* dummy = temp1->next;
    temp1->next=nullptr;
    delete dummy;
    return head;
}
if (s-n == 0) { 
    ListNode* dummy = head;
    head=head->next;
    
    delete dummy;
    return head;
}

    int i=1;
    while (i != s - n) {
    if (temp1 == nullptr) {
        
        return nullptr;
    }
    i++;
    temp1 = temp1->next;
}
  if (temp1 != nullptr && temp1->next != nullptr&&temp1->next->next!=nullptr) {
    ListNode* dummy = temp1->next;
    temp1->next = temp1->next->next;
    delete dummy;
}else if (temp1->next->next==nullptr) {
    ListNode* dummy = temp1->next;
    temp1->next=nullptr;
    delete dummy;
    return head;
    
}
return head;

        }
};