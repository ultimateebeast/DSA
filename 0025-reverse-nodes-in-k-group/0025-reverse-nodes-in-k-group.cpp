/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>res;
        while(head){
            res.push_back(head->val);
            head= head->next;
        }
        int index = res.size()/k;
        int start = 0;
        for(int i=0;i<index;i++){
            reverse(res.begin()+start,res.begin()+start+k);
            start+=k;
        }
        for(int val : res){
            cout<<val<<" ";
        }

        ListNode* newHead = new ListNode(0);
        ListNode* head1 = newHead;

        for(int val : res){
            head1->next = new ListNode(val);
            head1 = head1->next;
        }

        return newHead->next;
    }
};