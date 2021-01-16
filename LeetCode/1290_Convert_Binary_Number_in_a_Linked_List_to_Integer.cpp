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
    int getDecimalValue(ListNode* head) {
        string binaryVal = "";
        while(head) {
            binaryVal += (head -> val == 0)? '0': '1';
            head = head -> next;
        }
        int decimalVal = 0, binaryValLength = binaryVal.length();
        for(int i = binaryValLength - 1; i > -1; i--) {
            if(binaryVal[i] == '1')
                decimalVal += (1 << (binaryValLength - 1 - i));
        }
        return decimalVal;
    }
};
