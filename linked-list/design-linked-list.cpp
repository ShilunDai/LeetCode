class MyLinkedList {
private:
    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr) {};
    };

    LinkedNode* dummyhead;
    int size;

public:

    MyLinkedList() {
        dummyhead = new LinkedNode(0);
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size){
            return -1;
        }

        LinkedNode* curr = dummyhead->next;
        while (index--){
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        LinkedNode* newhead = new LinkedNode(val);
        newhead->next = dummyhead->next;
        dummyhead->next = newhead;
        size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newtail = new LinkedNode(val);
        LinkedNode* curr = dummyhead;

        while (curr->next != nullptr){
            curr = curr->next;
        }

        curr->next = newtail;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size || index < 0){
            return;
        }

        LinkedNode* curr = dummyhead;
        LinkedNode* newnode = new LinkedNode(val);
        while (index--){
            curr = curr->next;
        }

        newnode->next = curr->next;
        curr->next = newnode;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if (index < 0||index>=size){
            return;
        }

        LinkedNode* curr = dummyhead;

        while (index--){
            curr = curr->next;
        }

        LinkedNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        temp = nullptr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */