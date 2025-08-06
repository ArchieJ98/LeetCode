class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode *next, *prev;
        ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}
    };
    ListNode* head;
    int size;
    
public:
    MyLinkedList() : head(nullptr), size(0) {}

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        ListNode* ptr = head;
        while (index > 0) {
            ptr = ptr->next;
            index--;
        }
        return ptr->val;
    }

    void addAtHead(int val) {
        ListNode* temp = new ListNode(val);
        temp->next = head;
        temp->prev = nullptr;
        head = temp;
        size++;
    }

    void addAtTail(int val) {
        ListNode* temp = new ListNode(val);
        if (head == nullptr) {
            head = temp;
        } else {
            ListNode* ptr = head;
            while (ptr->next != nullptr) {
                ptr = ptr->next;
            }
            ptr->next = temp;
            temp->prev = ptr;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
        } else {
            ListNode* temp = new ListNode(val);
            ListNode* ptr = head;
            for (int i = 0; i < index - 1; ++i) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            temp->prev = ptr;
            ptr->next = temp;
            size++;
        }
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        ListNode* temp;
        if (index == 0) {
            temp = head;
            head = head->next;
            
        } else {
            ListNode* ptr = head;
            for (int i = 0; i < index-1; ++i) {
                ptr = ptr->next;
            }
            temp = ptr->next;
            
            ptr->next = temp->next;
        }
        delete temp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index, val);
 * obj->deleteAtIndex(index);
 */
