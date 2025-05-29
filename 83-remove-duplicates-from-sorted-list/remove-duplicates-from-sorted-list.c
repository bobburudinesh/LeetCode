/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head) {
        return NULL;
    }
    struct ListNode* p = head;
    struct ListNode* q = head;
    int currentVal = head->val;
    p = p->next;
    while(p) {
        if(currentVal != p->val) {
            currentVal = p->val;
            q->next = p;
            q = q->next;
        }
        p = p->next;
    }
    q->next = p;
    return head;
}