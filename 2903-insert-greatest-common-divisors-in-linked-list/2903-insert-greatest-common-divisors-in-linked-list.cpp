class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        if(head == nullptr || head->next == nullptr){
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != nullptr){
            int val = __gcd(slow->val,fast->val);
            ListNode* temp = new ListNode(val);

            slow->next = temp;
            temp->next = fast;

            slow = slow->next->next;
            fast = fast->next;
            
        }

        return head;
    }
};