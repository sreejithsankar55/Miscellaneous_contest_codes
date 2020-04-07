struct Node *prune(struct Node *root, int sum)
{ 
    if(!root)
        return NULL;
    root->left = prune(root->left,sum-root->data);
    root->right = prune(root->right,sum-root->data);
    
    if(root->left==NULL and root->right==NULL) {
        if(sum > root->data) {
            free(root);
            return NULL;
        }
    }
    return root;
} 
//https://practice.geeksforgeeks.org/contest-problem/pruning-a-tree702339/1/

//Also check this https://leetcode.com/problems/binary-tree-pruning/solution/

/*
Return the same tree where every subtree (of the given tree) not containing a 1 has been removed.

class Solution {
    public TreeNode pruneTree(TreeNode root) {
        return containsOne(root) ? root : null;
    }

    public boolean containsOne(TreeNode node) {
        if (node == null) return false;
        boolean a1 = containsOne(node.left);
        boolean a2 = containsOne(node.right);
        if (!a1) node.left = null;
        if (!a2) node.right = null;
        return node.val == 1 || a1 || a2;
    }
}*/
