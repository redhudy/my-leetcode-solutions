class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = new ListNode(0);
        ListNode* current = res;

        while (true) {
            if (list1 == NULL) {
                current->next = list2;
                break;
            }

            if (list2 == NULL) {
                current->next = list1;
                break;
            } 
            
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        return res->next;
    }
};