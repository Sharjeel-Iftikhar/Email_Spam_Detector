// Input: root = [10,4,6]
// Output: true
// Explanation: The values of the root, its left child, and its right child are 10, 4, and 6, respectively.
// 10 is equal to 4 + 6, so we return true.

// https : // leetcode.com/problems/root-equals-sum-of-children/
#include <iostream>
#include <string>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

bool checkTree(TreeNode *root)
{
    if (root == NULL)
        return false;
    if ((root->left->val + root->right->val) == root->val)
    {
        return true;
    }
    return false;
}

int main()
{

    return 0;
}