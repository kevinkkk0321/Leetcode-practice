/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
//iteratively
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*prev = NULL;
    struct ListNode*next = NULL;
    if(head==NULL ) return NULL; 
    
    while(head!=NULL){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;        
    }
    
    return prev;
}

//recursively
//...


