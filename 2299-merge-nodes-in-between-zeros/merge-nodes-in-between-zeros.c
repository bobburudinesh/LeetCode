/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    if(!head) {
        return head;
    }

    struct ListNode *p, *q;
    p = head->next;;
    int count;
    q= head;
    while(p) {
        if(p->val != 0) {
            count += p->val;
        } else {
            q->val = count;
            count = 0;
            q->next = p->next;
            q = q->next;
        }
        p = p->next;
    }
    free(p);
    free(q);
    return head;
}