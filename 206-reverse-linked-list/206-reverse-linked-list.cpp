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
        if(head)
        {
            ListNode *temp = head;
            ListNode *prev = new ListNode(head->val);//1
            ListNode *cur = nullptr;
            while((temp=temp->next))
            {
                cur = new ListNode(temp->val);
                cur->next = prev;
                prev = cur;
            }   
            if(cur)
                head = cur;
            return head;
        }
        return {};
    }
};