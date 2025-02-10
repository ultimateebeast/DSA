/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
unordered_map<Node* ,Node*>res;
    Node* cloneGraph(Node* node) {
        if(!node) return nullptr;
        if(res.count(node)) return res[node];

        Node *newNode = new Node(node->val);
        res[node] = newNode;

        for(Node* n : node->neighbors){
            newNode->neighbors.push_back(cloneGraph(n));
        }

        return newNode;
    }
};