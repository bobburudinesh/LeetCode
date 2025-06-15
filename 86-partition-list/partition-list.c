/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode *fast = head, *slow = head, *temp1 = NULL, *temp2 = NULL;
    struct ListNode lessList, moreList;
    lessList.next = NULL;
    moreList.next = NULL;
    temp1 = &lessList;
    temp2 = &moreList;
    while(head) {
        if(head->val < x) {
            temp1->next = head;
            temp1 = temp1->next;
        } else {
            temp2->next = head;
            temp2 = temp2->next;
        }
        head = head->next;
    }    
    temp1->next = moreList.next;;
    temp2->next = NULL;
    return lessList.next;

}