class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        // ListNode* dummy = new ListNode(0);
        // ListNode* curr = head;

        // while(curr!=nullptr){
        //     ListNode* prev = dummy;
        //     ListNode* nextNode = curr->next;
        //     while(prev->next!=nullptr && prev->next->val < curr->val){
        //         prev = prev -> next;
        //     }
        //     curr->next = prev->next;
        //     prev->next = curr;
        //     curr = nextNode; 
        // }
        // return dummy->next;

        vector<ListNode*>res;

        while(head){
            res.push_back(head);
            head = head->next;
        }

        sort(res.begin(),res.end(),[&](ListNode* a, ListNode* b){
            return a->val > b->val;
        });

        ListNode* prev = nullptr;

        for(int i=0;i<res.size();i++){
            head = res[i];
            head->next = prev;
            prev = head;
        }

        return head;
    }
};