 long long kthLargestLevelSum(TreeNode* root, int k) {

        queue<TreeNode*> q;
        vector<TreeNode*> Nodes;
        vector<long long> Levelsum;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* temp=q.front();
            long long s=0;

            if(temp==NULL)
            {
                int n=Nodes.size();
                for(int i=0; i<n; i++)
                {
                    s+=Nodes[i]->val;
                }
                Levelsum.push_back(s);
                Nodes.clear();
                q.pop();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                q.pop();
                Nodes.push_back(temp);
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

        int n=Levelsum.size();
        if(n<k)
            return -1;

        sort(Levelsum.begin(),Levelsum.end());

        return Levelsum[n-k];
    }