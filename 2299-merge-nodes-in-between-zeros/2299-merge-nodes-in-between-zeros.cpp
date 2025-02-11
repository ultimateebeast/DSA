class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        vector<int> res;
        int sum = 0;
        ListNode* temp = head;
        while(temp){
            if(temp->val != 0){
                sum+=temp->val;
            }
            else{
                res.push_back(sum);
                sum = 0;
            }
            temp = temp->next;
        }
        // for(int i=0;i<res.size();i++){
        //     cout<<res[i]<<" ";
        // }
        ListNode* newHead = new ListNode(0);
        ListNode* head1 = newHead; 
        for(int i=1;i<res.size();i++){
            head1->next = new ListNode (res[i]);
            head1 = head1 -> next;
        }
        return newHead->next;
    }
};