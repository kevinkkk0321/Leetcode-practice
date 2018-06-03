/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /*iteratively*/
		/*
        ListNode* next_node=NULL;
        ListNode* prev_node=NULL;
        
        while(head != NULL){
            next_node = head->next;
            head->next = prev_node;
            prev_node = head;
            head = next_node;
        }
        return prev_node;
        */
        /*recursively*/
        if(!head || !head->next) return head;
        ListNode* res = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return res;
        
    }
};