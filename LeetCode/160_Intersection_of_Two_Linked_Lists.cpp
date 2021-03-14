/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA, *temp2 = headB;
        int count1 = 0, count2 = 0;
        while(temp1 != NULL) {
            count1++;
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL) {
            count2++;
            temp2 = temp2 -> next;
        }
        int diff = abs(count1 - count2);
        temp1 = headA, temp2 = headB;
        if(count1 > count2) {
            while(diff--)
                temp1 = temp1 -> next;
        }
        else {
            while(diff--)
                temp2 = temp2 -> next;
        }
        while(temp1 != NULL && temp2 != NULL) {
            if(temp1 == temp2)
                return temp1;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return NULL;
    }
};
