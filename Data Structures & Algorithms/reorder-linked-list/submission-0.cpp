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
    void reorderList(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        ListNode* prev = slow->next = nullptr;
        ListNode* nextNode = nullptr;
        while(second){
            nextNode = second->next;
            second->next = prev;
            prev = second;
            second = nextNode;
        }

        second = prev;
        ListNode* First = head;
        while (second){
            ListNode* temp1 = First->next;
            ListNode* temp2 = second->next;

            First->next = second;
            second->next = temp1;

            First = temp1;
            second = temp2;
        }
    }
};
