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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *curr = head;
        int sum, c = 0;
        
        while(l1 && l2)
        {
            sum = l1 -> val + l2 -> val;
            if(c)
                sum += c;
            c = sum / 10;
            sum = sum % 10;
            curr -> val = sum;
            l1 = l1 -> next;
            l2 = l2 -> next;
            if(l1 && l2) {
                curr -> next = new ListNode();
                curr = curr -> next;   
            }
        }
        while(l1) {
            curr -> next = new ListNode();
            curr = curr -> next;
            sum = l1 -> val;
            if(c)
                sum += c;
            c = sum / 10;
            sum = sum % 10;
            curr -> val = sum;
            l1 = l1 -> next;
        }
        while(l2) {
            curr -> next = new ListNode();
            curr = curr -> next;
            sum = l2 -> val;
            if(c)
                sum += c;
            c = sum / 10;
            sum = sum % 10;
            curr -> val = sum;
            l2 = l2 -> next;
        }
        if(c) {
            curr -> next = new ListNode();
            curr = curr -> next;
            curr -> val = c;
        }
        return head;
    }
};
