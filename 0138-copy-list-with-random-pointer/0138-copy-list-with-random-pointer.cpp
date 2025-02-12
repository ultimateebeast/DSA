class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* , Node*>res;

        Node* curr = head;

        while(curr){
            res[curr] = new Node(curr->val);
            curr = curr->next;
        }

        curr = head;

        while(curr){
            Node* c = res[curr];
            c->next = res[curr->next];
            c->random = res[curr->random];
            curr = curr->next;
        }
        return res[head];
    }
};