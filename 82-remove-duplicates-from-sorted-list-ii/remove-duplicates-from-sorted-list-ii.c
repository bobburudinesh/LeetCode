/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !head->next) {
        return head;
    }
    struct ListNode startNode;
    struct ListNode *p1, *p2;
    startNode.next = head;
    p1 = &startNode;
    p2 = head->next;
    while(p2) {

        if(p2->val == p1->next->val) {
            while(p2 && (p2->val == p1->next->val)) {
                p2 = p2->next;
            }
            p1->next = p2;
            if(p2) {
                p2 = p2->next;
            }
            
        } else {
            p1 = p1->next;
            p2 = p2->next;
        }
        
    }
    return startNode.next;
}