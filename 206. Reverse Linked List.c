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
        if(!head)
            return 0;
        
        ListNode * prev = NULL;
        ListNode * cur = head;
        ListNode * next = NULL;
        
        while(cur){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }        
        return prev;
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return 0;
        
        ListNode * prev = NULL;
        ListNode * cur = head;
        ListNode * next = cur->next;
        
        while(cur && next){
            cur->next = prev;
            prev = cur;
            cur = next;
            next = next->next;
        }        
        cur->next = prev;
        return cur;
    }
};