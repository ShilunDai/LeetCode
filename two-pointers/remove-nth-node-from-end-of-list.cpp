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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyhead = new ListNode();
        dummyhead->next = head;
        ListNode* fast = dummyhead;
        ListNode* slow = dummyhead;

        while (n--){
            fast = fast->next;
        }
        while (fast->next){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;
        return dummyhead->next;
    }
};