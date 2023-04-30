  TreeNode* insertIntoBST(TreeNode* root, int val) {

        vector<TreeNode*> arr;

        while(root!=NULL)
        {
            arr.push_back(root);
            if(val>root->val)
            {
                root=root->right;
            }
            else
            {
                root=root->left;
            }
        }


        TreeNode *temp=new TreeNode(val);

        if(arr.empty())
            return temp;

        int n=arr.size();

        if(val>arr[n-1]->val)
        {
            arr[n-1]->right=temp;
        }
        else
        {
            arr[n-1]->left=temp;
        }

        return root=arr[0];

    }