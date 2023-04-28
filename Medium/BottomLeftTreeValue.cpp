 int findBottomLeftValue(TreeNode* root) {
    
        queue<TreeNode*> q;
        int ans;

        q.push(root);
        q.push(NULL);
        ans=root->val;
    
        while(!q.empty())
        {
            TreeNode* temp=q.front();

            if(temp==NULL)
            {
                q.pop();
                if(!q.empty())
                {
                    ans=q.front()->val;
                    q.push(NULL);
                }
            }

            else
            {
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return ans;

    }