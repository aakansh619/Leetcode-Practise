/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxSum;
    int solve(TreeNode* root){
        if(root == NULL) return 0;

        int l = solve(root->left);
        int r = solve(root->right);

        int neeche_hi_milgya_ans = l + r + root->val; // 1

        int koi_ek_achha = max(l,r) + root->val; // 2

        int sirf_root_achha = root->val;  // 3

        maxSum = max({maxSum , neeche_hi_milgya_ans , koi_ek_achha , sirf_root_achha});


        // most important part of the question.
        return max(koi_ek_achha ,sirf_root_achha); //max(2,3); 1 ko isiliye nhi liya kyuki phir path change ho jaayega.

    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;

        solve(root);
        return maxSum;
    }
};
