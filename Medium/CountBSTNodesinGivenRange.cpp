   int getCount(Node *root, int l, int h)
    {
        
        queue<Node*> q;
        
        q.push(root);
        q.push(NULL);
        int count=0;
        
        while(!q.empty())
        {
            Node* temp=q.front();
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
                if(temp->data>=l and temp->data<=h)
                    count++;
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        
        return count;
      // your code goes here   
    }