/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reverseLinkedList(struct ListNode* head, int from, int to) {

}
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!k || (!head) || (!head->next)) {
        return head;
    }
    int length = 0,count = 0, shift = 0;
    struct ListNode *p = head, *q = head, *lastNode = NULL;
    while(p) {
        length++;
        printf("%d:%p\n", p->val, p);
        p = p->next;
    }
    p = head;
    shift = k % length;
    while(count < shift) {
        p = p->next;
        count++;
    }
    while(p) {
        //printf("AFTER:Q: %d:%p      :P:  %d:%p          lastNode:%p\n", q->val, q, p->val, p,lastNode);
        
        if(!p->next){
            
            lastNode = p;
            //printf("AFTER IN IF:Q: %d:%p      :P:  %d:%p          lastNode:%p\n", q->val, q, p->val, p,lastNode);
            break;
        }
        q = q->next;
        p = p->next;
        
        
    }

    lastNode->next = head;
    head = q->next;
    q->next = NULL;
    return head;
}