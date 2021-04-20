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
    ListNode* partition(ListNode* head, int x) {
        ListNode *before = new ListNode();
        ListNode *tmp1 = before;
        ListNode *after = new ListNode();
        ListNode *tmp2 = after;
        
        while(head != NULL) {
            if(head -> val < x) {
                tmp1 -> next = head;
                tmp1 = tmp1 -> next;
            }
            else {
                tmp2 -> next = head;
                tmp2 = tmp2 -> next;
            }
            head = head -> next;
        }
        
        tmp2 -> next = NULL;
        tmp1 -> next = after -> next;
        return before -> next;
    }
};
