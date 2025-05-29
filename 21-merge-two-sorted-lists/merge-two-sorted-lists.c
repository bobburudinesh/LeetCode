/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
        if(!list1 && list2) {
            return list2;
        } else if (list1 && !list2) {
            return list1;
        } else if (!list1 && !list2){
            return NULL;
        }
        struct ListNode *result_head, *p;
        if(list1->val <= list2->val){
            result_head = list1;
            list1 = list1->next;
        } else {
            result_head = list2;
            list2 = list2->next;
        }
        p = result_head;
        while(list1 && list2) {
            if(list1->val <= list2->val) {
                p->next = list1;
                list1 = list1->next;
            } else {
                p->next = list2;
                list2 = list2->next;
            }
            p = p->next;
        }
        if(list1) {
            p->next = list1;
        }
        if(list2) {
            p->next = list2;
        }
        
            // while(p->next != NULL) {
            //     printf("%d ,", p->val);
            //     p = p->next;
            // }

        return result_head;

}