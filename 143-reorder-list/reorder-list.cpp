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
    ListNode* reverseL(ListNode* head)
        {
            ListNode* prev = nullptr;
            ListNode* curr = head;

            while(curr)
            {
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            return prev;
        }

    void reorderList(ListNode* head) {
        

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;

        }
        ListNode* second = reverseL(slow->next);

        slow->next = nullptr;

        ListNode* p1 = head;
        ListNode* p2 = second;

        while(p2)
        {
            ListNode* temp1 = p1->next;
            ListNode* temp2 = p2-> next;

            p1->next = p2;
            p2->next = temp1;

            p1 = temp1;
            p2 = temp2;

        }

    }
};