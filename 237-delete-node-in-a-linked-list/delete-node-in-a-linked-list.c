/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    
    while(node->next) {
        node->val = node->next->val;
        if(!node->next->next) {
            node->next = NULL;
            break;
        }
        node = node->next;
    }
}