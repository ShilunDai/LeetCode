class MyLinkedList {
public:

    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val):val(val), next(nullptr) {};
    };

    MyLinkedList() {
        dummyhead = new LinkedNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= _size){
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
        _size++;
    }
    
    void addAtTail(int val) {
        LinkedNode* newtail = new LinkedNode(val);
        LinkedNode* curr = dummyhead;

        while (curr->next != nullptr){
            curr = curr->next;
        }

        curr->next = newtail;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size){
            return;
        }
        if (index < 0){
            return;
        }

        LinkedNode* curr = dummyhead;
        LinkedNode* newnode = new LinkedNode(val);
        while (index--){
            curr = curr->next;
        }

        newnode->next = curr->next;
        curr->next = newnode;
        _size++;

    }
    
    void deleteAtIndex(int index) {
        if (index < 0||index>=_size){
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
        _size--;
    }

private:
    LinkedNode* dummyhead;
    int _size;
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