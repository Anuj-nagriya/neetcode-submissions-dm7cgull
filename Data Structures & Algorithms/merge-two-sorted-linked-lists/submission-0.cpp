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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr && list2 == nullptr) return nullptr;
        if (list1 == nullptr && list2 != nullptr) return list2;
        if (list1 != nullptr && list2 == nullptr) return list1;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* new_list_head = nullptr;
        ListNode* new_list_tail = nullptr;
        if(ptr1->val >= ptr2->val){
            new_list_head = ptr2;
            ptr2 = ptr2->next;
        }else{
            new_list_head = ptr1;
            ptr1 = ptr1->next;
        }
        new_list_tail = new_list_head;

        while (ptr1 != nullptr && ptr2 != nullptr){
            if (ptr1->val <= ptr2->val){
                new_list_tail->next = ptr1;
                new_list_tail = ptr1;
                ptr1 = ptr1->next;
            }else{
                new_list_tail->next = ptr2;
                new_list_tail = new_list_tail->next;
                ptr2 = ptr2->next;
            }
        }

        if (ptr1 != nullptr){
            new_list_tail->next = ptr1;
        }else{
            new_list_tail->next = ptr2;
        }

        return new_list_head;
    }
};
