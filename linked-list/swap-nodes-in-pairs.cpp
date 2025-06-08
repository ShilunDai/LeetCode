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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;

        ListNode* curr = head;
        ListNode* pre = dummyhead;

        while (curr != nullptr && curr->next != nullptr){
            ListNode* temp = curr->next;
            curr->next = temp->next;

            pre->next = temp;
            temp->next = curr;

            pre = curr;
            curr = pre->next;
        }

        return dummyhead->next;
    }
};