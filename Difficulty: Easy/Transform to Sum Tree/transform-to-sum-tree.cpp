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
      if(root == NULL) {
          return 0;
      }
      int leftSum = transformTree(root->left);
      int rightSum = transformTree(root->right);
      int oldVal = root->data;
      root->data = leftSum + rightSum;
      return root->data + oldVal;
  }
  
    void toSumTree(Node *root) {
        transformTree(root);
    }
};