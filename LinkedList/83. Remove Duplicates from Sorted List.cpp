class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur_node = head;
        while (cur_node && cur_node->next) {
            ListNode* next_node = cur_node->next;
            if (cur_node->val == next_node->val)
                cur_node->next = next_node->next;
            else
                cur_node = next_node;
        }
        return head;
    }
};
