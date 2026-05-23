/* Structure for Tree Node
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
    int transformTree(Node* root) {
        if(root==NULL) {
            return 0;
        }
        int leftSum = transformTree(root->left);
        int rightSum = transformTree(root->right);
        int oldValue = root->data;
        root->data = leftSum + rightSum;
        return root->data + oldValue;
    }
    void toSumTree(Node *root) {
        if(root == NULL) {
            return;
        }
        transformTree(root);
    }
};