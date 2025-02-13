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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {


        ListNode* slow = list1;
        for(int i=0;i<a-1;i++){
            slow = slow->next;
        }
        

        ListNode* slow1 = slow;
        for(int i=0;i<(b - a + 2);i++){
            slow1 = slow1->next;
        }

        slow->next = list2;

        ListNode* fast = list2;
        while(fast->next!=nullptr){
            fast = fast->next;
        }
        fast->next = slow1;

        return list1;
    }
};