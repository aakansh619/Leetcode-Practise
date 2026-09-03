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
    ListNode* reverseLL(ListNode* neww){
       ListNode* curr = neww;
       ListNode* prev = NULL;

       while(curr != NULL){
        ListNode* next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
       }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = reverseLL(l1);
        ListNode* t2 = reverseLL(l2);

        ListNode* res = new ListNode(0);
        int carry=0;
        ListNode* temp = res;

        while(t1 != NULL || t2 != NULL){
            int add=0;

            if(t1 != NULL){
                add += t1->val;
                t1 = t1->next;
            }
            if(t2 != NULL){
                add += t2->val;
                t2 = t2->next; 
            }
            add += carry;
            if(add >= 10){
                int digit = add % 10;
                carry = add / 10;
                res->next = new ListNode(digit);
                res = res->next;
            }else{
                res->next = new ListNode(add);
                res = res->next;
                carry = 0;
            }
        }
        if(carry != 0) res->next = new ListNode(carry);
        return reverseLL(temp->next);
    }
};A
