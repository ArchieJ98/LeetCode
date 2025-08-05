class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string res = "";
        ListNode* ptr = head;
        while (ptr != nullptr) {
            res += to_string(ptr->val);
            ptr = ptr->next;
        }
        string temp = res;
        reverse(temp.begin(), temp.end());
        return temp == res;
    }
};
