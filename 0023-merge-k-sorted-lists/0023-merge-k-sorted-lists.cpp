class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }

        while(lists.size()>1){
            lists.push_back(merge(lists[0],lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists.front();
    }
private:
ListNode* merge(ListNode* l1,ListNode* l2){
    if(l1 == nullptr){
        return l2;
    }
    if(l2 == nullptr){
        return l1;
    }

    if(l1->val <= l2->val){
        l1->next = merge(l1->next,l2);
        return l1;
    }
    else{
        l2->next = merge(l1,l2->next);
        return l2;
    }
}
};