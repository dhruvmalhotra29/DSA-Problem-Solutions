vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
        vector<int> RTraversal;
        queue<TreeNode<int>*> q;

        if(root==NULL)
            return {};

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode<int>* temp=q.front();

            if(temp==NULL)
            {
                q.pop();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

            else
            {
                q.pop();
                RTraversal.push_back(temp->val);
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

    reverse(RTraversal.begin(),RTraversal.end());
        return RTraversal;
    
}