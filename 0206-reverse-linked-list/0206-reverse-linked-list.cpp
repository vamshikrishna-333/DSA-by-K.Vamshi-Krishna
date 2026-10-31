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
        if(head==nullptr) return head;
        if(head->next == nullptr) return head;
        
        stack<int>s;
        ListNode* curr = head;
        while(curr!= nullptr){
            s.push(curr->val);
            curr = curr->next;
        }
        ListNode* temp = head;
        while(temp != nullptr){
            temp->val = s.top();
            s.pop();
            temp = temp->next;
        }
        return head;
    }
};