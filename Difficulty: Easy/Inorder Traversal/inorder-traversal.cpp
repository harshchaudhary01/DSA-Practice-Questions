/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorderTraversal(Node* node,vector<int> &result){
        if(node==nullptr) return;
        inorderTraversal(node->left,result);
        result.push_back(node->data);
        inorderTraversal(node->right,result);
    }

    vector<int> inOrder(Node* root) {
        Node* node = root;
        vector<int>result;
        if(node == nullptr) return result;
        inorderTraversal(node, result);
        return result;
    }
};