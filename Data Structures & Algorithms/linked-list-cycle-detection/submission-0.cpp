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
    bool hasCycle(ListNode* head) {
        if (head == nullptr) return false;
        unordered_map<ListNode*,int> map;
        ListNode* temp = head;
        int index = 0;
        while (temp != nullptr){
            if(map.find(temp) != map.end()){
                return true;
            }else{
                index++;
                map.insert({temp,index});
            }
            temp = temp->next;
        }
        return false;
    }
};
