class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Remove all leading nodes with the target value
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Now handle the rest of the list
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        
        return head;
    }
};
