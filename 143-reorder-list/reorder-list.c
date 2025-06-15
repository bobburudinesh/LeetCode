/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverse(struct ListNode *p) {
    struct ListNode *prev, *curr, *next;
    prev = NULL;
    next = NULL;
    curr = p;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void merge(struct ListNode *l1, struct ListNode *l2) {
    struct ListNode *temp1, *temp2;

    while(l1 && l2) {
        temp1 = l1->next;
        temp2 = l2->next;
        l1->next = l2;
        if(!temp1) {
            break;
        }
        l2->next = temp1;
        l1 = temp1;
        l2 = temp2;
    }
    
}
void reorderList(struct ListNode* head) {
    struct ListNode *mid, *temp;
    mid = head;
    temp = head;
    while(temp->next && temp->next->next) {
        mid = mid->next;
        temp = temp->next->next;
    }
    temp = reverse(mid->next);
    mid->next = NULL;
    merge(head, temp);
    
    
}