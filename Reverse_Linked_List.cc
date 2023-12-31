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
    ListNode* reverseList(ListNode* head) {
        if (!head)
            return nullptr;
        
        ListNode* reversed = nullptr;
        while (head) {
            ListNode* temp = head->next;
            head->next = reversed;
            reversed = head;
            head = temp;
        }

        return reversed;
    }
};