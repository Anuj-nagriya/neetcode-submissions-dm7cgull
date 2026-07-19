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
        if(head == nullptr) return nullptr;
        
        ListNode* Head = head;
        ListNode* Temp = nullptr;
        ListNode* For = nullptr;
        while(true){

            if(Head != nullptr){
                For = Head->next;
                Head->next = Temp;
                Temp = Head;
                Head = For;
            }else{
                break;
            }
            
        }
        return Temp;
    }
};
;
