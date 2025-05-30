/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if((!head) || (!head->next)) {
        return head;
    }
    struct ListNode *p, *q, *dummy;
    int temp;
    p = head;
    q = head->next;
    while(q){
        temp = p->val;
        p->val = q->val;
        q->val = temp;
        dummy = head;
        if(!q->next){
            break;
        }
        p = q->next;
        q = p->next;  
    }
    return head;
}