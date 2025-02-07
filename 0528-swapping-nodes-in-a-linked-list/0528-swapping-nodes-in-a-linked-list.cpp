class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * curr = head;
        int count = 1 , size = 0;
        while(curr!=nullptr){
            size++;
            curr = curr->next;
        }
        
        int last = size - k + 1;
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1;i<k;i++) slow = slow->next;
        for(int i=1;i<last;i++) fast = fast->next;

        swap(slow->val,fast->val);

        return head;
    }
};