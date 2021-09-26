/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void preorderHelper(Node* root, vector<int>* result){
        if(root == NULL){
            return;
        }
        
        result->push_back(root->val);
        for(int i = 0; i < root->children.size(); i++){
            preorderHelper(root->children[i], result);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> result;
        
        preorderHelper(root, &result);
        
        return result;
    }
};