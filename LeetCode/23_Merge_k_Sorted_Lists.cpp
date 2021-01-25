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
    ListNode* mergeLists(vector<ListNode*>& lists, int l, int r) {
        if(l == r)
            return lists[l];
        int mid = l + (r - l) / 2;
        ListNode *left = mergeLists(lists, l, mid);
        ListNode *right = mergeLists(lists, mid + 1, r);
        return merge(left, right);
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1), *curr;
        curr = head;
        while(l1 != NULL || l2 != NULL) {
            if(l1 == NULL) {
                curr -> next = l2;
                l2 = l2 -> next;
            }
            else if(l2 == NULL) {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else if(l1 -> val < l2 -> val) {
                curr -> next = l1;
                l1 = l1 -> next;
            }
            else {
                curr -> next = l2;
                l2 = l2 -> next;
            }
            curr = curr -> next;
        }
        return head -> next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return NULL;
        return mergeLists(lists, 0, lists.size() - 1);
    }
};
