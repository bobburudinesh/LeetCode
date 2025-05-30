/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!k || (!head) || (!head->next)) {
        return head;
    }
    int length = 0,count = 0;
    struct ListNode *p = head, *q = head, *lastNode = NULL;
    while(p) {
        length++;
        p = p->next;
    }
    p = head;
    length = k % length;
    while(count < length) {
        p = p->next;
        count++;
    }
    while(p) {
        if(!p->next){
            lastNode = p;
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