void Inorder(TreeNode* root, vector<int> &a)
    {
        if(root==NULL)
        {
            return;
        }

        Inorder(root->left,a);
        a.push_back(root->val);
        Inorder(root->right,a);

        return;
    }

    bool isValidBST(TreeNode* root) {
      
        vector<int> a;

        Inorder(root,a);

        for(int i=1; i<a.size(); i++)
        {
            if(a[i]<=a[i-1])
                return false;
        }

        return true;

    }