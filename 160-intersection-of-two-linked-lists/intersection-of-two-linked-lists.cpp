/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* p = headA;
        ListNode* q = headB;
        while(p != nullptr || q != nullptr) {
            if(p != nullptr) {
                lenA++;
                p = p->next;
            }
            if(q != nullptr) {
                lenB++;
                q = q->next;
            }
        }
        p = headA;
        q = headB;
        if(lenA > lenB) {
            for(int i = 0; i < (lenA - lenB); i++) {
                p = p->next;
            }
        }
        if(lenB > lenA) {
            for(int i = 0; i < (lenB - lenA); i++) {
                q = q->next;
            }
        }
        if(p == q) {
            return p;
        }
        while(p != nullptr && q != nullptr) {
            if(p->next == q->next) {
                return p->next;
            }
            
            p = p->next;
            q = q->next;
        }
        
        return nullptr;
    }
};