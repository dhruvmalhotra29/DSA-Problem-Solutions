 void Inorder(TreeNode* root, int &k, int &kthsmallest)
    {
        if(root==NULL)
        {
            return;
        }

        Inorder(root->left,k,kthsmallest);
        
        k--;
        if(k==0)
        {
            kthsmallest=root->val;
            return;
        }
        Inorder(root->right,k,kthsmallest);

        return;
    }

    int kthSmallest(TreeNode* root, int k) {

        int ans;

        Inorder(root,k,ans);

        return ans;
    }