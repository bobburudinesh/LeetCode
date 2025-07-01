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
    p = head;
    int count;
    bool isListStarted = false;
    while(p) {
        if(p->val != 0) {
            isListStarted = true;
            count += p->val;
        } else {
            if(isListStarted) {
                q->val = count;
                if(!p->next) {
                    q->next =NULL;
                } else {
                    q->next = p;
                }
                
            }
            count = 0;
            q = p;
        }
        p = p->next;
    }
    q->next = NULL;
    return head;
}