/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
  
    Node* helper(vector<int>& nodes, int i){
        if(i >= nodes.size()) return nullptr;
        
        Node* root = new Node(nodes[i]);
        root->left = helper(nodes,2*i+1);
        root->right = helper(nodes,2*i+2);
        
        return root;
    }
    
    Node* buildTree(vector<int>& nodes) {
        return helper(nodes,0);
    }
};