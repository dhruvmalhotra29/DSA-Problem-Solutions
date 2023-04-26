 vector<int> largestValues(TreeNode* root) {
        
        vector<int> largest;
        queue<TreeNode*> q;

        if(root==NULL)
            return {};

        q.push(root);
        int big=root->val;
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* temp=q.front();

            if(temp==NULL)
            {
                largest.push_back(big);
                big=INT_MIN;
                q.pop();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                q.pop();
                big=max(big,temp->val);
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

        return largest;      
    }