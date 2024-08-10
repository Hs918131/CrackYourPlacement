#include <algorithm>
class Solution {
public:
    int height(TreeNode* root) {
        if (!root) {
            return 0;
        }
        int hLeft = height(root->left);
        if (hLeft < 0) {
            return -1;
        }
        int hRight = height(root->right);
        if (hRight < 0 || std::abs(hLeft - hRight) > 1) {
            return -1;
        }
        return std::max(hLeft, hRight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return height(root) >= 0;
    }
};
