int maxLevelSum(TreeNode *root)
{
    // Write your code here
    int sum=0,max_sum=-1,level=1,maxlevel;
    queue<TreeNode*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        TreeNode* temp=q.front();

        if(temp==NULL)
        {
            if(sum>max_sum)
            {
                max_sum=sum;
                maxlevel=level;
            }
            level++;
            sum=0;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            sum+=temp->val;
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

    return maxlevel;
}