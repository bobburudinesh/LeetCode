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

    // Below is the solution for swapping values. Look further below for swapping nodes.
    // struct ListNode *p, *q, *dummy;
    // int temp;
    // p = head;
    // q = head->next;
    // while(q){
    //     temp = p->val;
    //     p->val = q->val;
    //     q->val = temp;
    //     dummy = head;
    //     if(!q->next){
    //         break;
    //     }
    //     p = q->next;
    //     q = p->next;  
    // }
    // return head;


    // Below code is solely for swapping nodes
    struct ListNode *p, *temp;
    struct ListNode n1;
    n1.next = head;
    p=&n1;
    while(p->next && p->next->next){
        temp = p->next;
        p->next = temp->next;
        temp->next = temp->next->next; 
        p->next->next = temp; 
        p = temp;
    }
    return n1.next;
}