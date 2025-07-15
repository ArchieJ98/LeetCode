class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Step 1: Count length
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }

        // Step 2: Special case - remove head
        if (n == length) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        // Step 3: Find the node before the one to delete
        temp = head;
        for (int i = 1; i < length - n; ++i) {
            temp = temp->next;
        }

        // Step 4: Delete target node
        ListNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;

        return head;
    }
};
