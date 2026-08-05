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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(carry != 0 || l1 != nullptr || l2 != nullptr){
            int k=0,j=0;
            if (l1 != nullptr){
                j = l1->val;
            }
            if (l2 != nullptr){
                k = l2->val;
            }

            sum = j+k+carry;
            carry = sum/10;
            temp->next = createNode(sum%10);
            temp = temp->next;
            if(l1 != nullptr){
                l1 = l1->next;
            }

            if(l2 != nullptr){
                l2 = l2->next;
            }
        }
        return dummy->next;
    }
    ListNode* createNode(int val){
        return new ListNode(val);
    }
};
