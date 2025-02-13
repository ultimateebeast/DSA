class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        vector<int>odd , even;
        ListNode* curr = head;
        int i=0;
        while(curr){
            if(i%2 == 0){
                odd.push_back(curr->val);
            }
            else{
                even.push_back(curr->val);
            }
            curr = curr->next;
            i++;
        }
        ListNode* newHead = new ListNode(0);
        ListNode* head1 = newHead;

        for(int i=0;i<odd.size();i++){
            head1->next = new ListNode(odd[i]);
            head1 = head1->next;
        }
        
        for(int i=0;i<even.size();i++){
            head1->next = new ListNode(even[i]);
            head1 = head1->next;
        }
        return newHead->next;
    }
};