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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;  // No need to reorder if the list has 0 or 1 node
        }
        
        ListNode* odd = head;              // Start with the first node as odd
        ListNode* even = head->next;       // The second node is even
        ListNode* evenHead = even;         // Keep track of the head of the even list
        
        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;        // Link the current odd node to the next odd node
            odd = odd->next;               // Move the odd pointer forward
            
            even->next = odd->next;        // Link the current even node to the next even node
            even = even->next;             // Move the even pointer forward
        }
        
        odd->next = evenHead;  // Attach the even list to the end of the odd list
        
        return head;  // The head hasn't changed, return it
    }
};
