/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* addCarryNode(void){
        struct ListNode *carryNode;
        carryNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        carryNode->val = 1;
        carryNode->next = NULL;
        return carryNode;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* result_head = l1;
    
    while(l1 && l2) {
        if((l1->val + l2->val + carry) < 10) {
            l1->val += l2->val+carry;

            carry = 0;
        } else {
            l1->val = (l1->val + l2->val+carry)-10;
            printf("Before: l1 Val: %d\n", l1->val);
            carry = 1;
        }
        if(!l1->next && !l2->next && carry) {
            l1->next = addCarryNode();
            l1 = NULL;
            l2 = NULL;
            break;
        } else if(!l1->next && l2->next) {
            l1->next = l2->next;
            l1 = l1->next;
            break;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1){
        
        if((l1->val + carry) < 10) {
            l1->val += carry;
            carry = 0;
        } else {
            l1->val = l1->val + carry - 10;
            carry = 1;
        }
        if(!l1->next && carry) {
            l1->next = addCarryNode();
            break;
        }
        l1 = l1->next;
    }
    

    return result_head;
}