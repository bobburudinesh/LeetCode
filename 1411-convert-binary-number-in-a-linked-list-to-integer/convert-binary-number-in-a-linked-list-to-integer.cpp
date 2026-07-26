/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #define INSERT_BIT (num, bit_val) ((num << 1) | bit_val)
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        ListNode* p = head;
        while(p != nullptr) {
            num = ((num << 1) | p->val);
            p = p->next;
        } 
        return num;
    }
};