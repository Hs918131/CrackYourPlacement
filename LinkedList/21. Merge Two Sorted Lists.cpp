class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (!a || b && a->val > b->val)
            swap(a, b);
        if (a)
            a->next = mergeTwoLists(a->next, b);
        return a;
    }
};
