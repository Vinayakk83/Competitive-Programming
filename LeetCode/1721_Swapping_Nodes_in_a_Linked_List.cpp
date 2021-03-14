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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *k_begin = head, *k_end = head;
        
        while(--k)
            k_begin = k_begin -> next;
        
        ListNode *ptr = k_begin -> next;
        
        while(ptr != NULL) {
            ptr = ptr -> next;
            k_end = k_end -> next;
        }
        
        swap(k_begin -> val, k_end -> val);
        
        return head;
    }
};
