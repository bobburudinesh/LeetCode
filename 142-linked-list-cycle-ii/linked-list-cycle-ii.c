/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void detectCycle_1(struct ListNode *head){
    
    struct ListNode *p1 = head, *p2 = head;
    p2 = p2->next->next;
    while(p1 && p2) {
        if(p1 == p2) {
            printf("Loop Found\n");
            return;
        }
        p1 = p1->next;
        p2 = (p2->next) ? p2->next->next : NULL;
    }
    printf("Loop Not Found\n");

}
struct ListNode *detectCycle(struct ListNode *head) {
    if(!head || head->next == NULL) {
        return NULL;
    }
    struct ListNode *p1 = head, *p2 = head;
    
    while(p2 && p2->next) {
        p1 = p1->next;
        p2 =  p2->next->next;
        if(p1 == p2) {
            while(head != p1) {
                head = head->next;
                p1 = p1->next;
            }
            return head;
        }

    }
    return NULL;
}