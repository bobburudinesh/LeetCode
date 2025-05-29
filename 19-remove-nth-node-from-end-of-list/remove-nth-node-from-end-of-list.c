/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if((!head->next && (n == 1)) || (!head)) {
        return NULL;
    }
    int count = 0;
    int indexToDelete = 0;
    struct ListNode* l1 = head;
    struct ListNode* prevNode;;
    while(l1) {
        count++;
        l1 = l1->next;
    }
    l1 = head;
    indexToDelete = count - n;
    count = 0;

    while(l1) {
        if(indexToDelete == 0) {
            return l1->next;
        }
        if(count == indexToDelete) {
            prevNode->next = l1->next;
            break;
        }
        count++;
        prevNode = l1;
        l1 = l1->next;
    }
    return head;
}