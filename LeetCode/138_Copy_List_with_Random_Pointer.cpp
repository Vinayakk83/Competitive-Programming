/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *itr, *front;
        itr = head;
        front = head;
        while(itr != NULL) {
            front = front -> next;
            Node *copy = new Node(itr -> val);
            itr -> next = copy;
            copy -> next = front;
            itr = front;
        }
        
        itr = head;
        while(itr != NULL) {
            if(itr -> random != NULL)
                itr -> next -> random = itr -> random -> next;
            itr = itr -> next -> next;
        }
        
        itr = head;
        Node *pseudo_head = new Node(0);
        Node *copy;
        copy = pseudo_head;
        while(itr != NULL) {
            front = itr -> next -> next;
            copy -> next = itr -> next;
            itr -> next = front;
            copy = copy -> next;
            itr = itr -> next;
        }
        
        return pseudo_head -> next;
    }
};
