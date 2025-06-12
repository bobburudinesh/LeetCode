/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *p1, *p2;
    p1 = head;
    p2 = head;
    while(p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    } 
    return p1;
}