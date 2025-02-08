class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        vector<int> temp;

        while (head != nullptr) {
            temp.push_back(head->val);
            head = head->next;
        }

        sort(temp.begin(), temp.end());
        ListNode* head1 = dummy;
        for (int val : temp) {
            head1->next = new ListNode(val);
            head1 = head1->next;
        }
        return dummy->next;
    }
};