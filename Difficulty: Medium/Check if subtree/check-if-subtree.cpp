/*
Definition for Node
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    bool isIdentical(Node* root1, Node* root2) {
        if(!root1 && !root2) {
            return true;
        }
        if(!root1 || !root2) {
            return false;
        }
        return (root1->data == root2->data) && (isIdentical(root1->left, root2->left) || isIdentical(root1->right, root2->right));
    }
  
    bool isSubTree(Node *root1, Node *root2) {
        if(!root1 || !root2) {
            return false;
        }
        if(isIdentical(root1, root2)) {
            return true;
        }
        return isSubTree(root1->left, root2) || isSubTree(root1->right, root2);
    }
};