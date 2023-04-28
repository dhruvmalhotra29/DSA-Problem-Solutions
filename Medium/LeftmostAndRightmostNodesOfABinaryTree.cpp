void printCorner(Node *root)
{

// Your code goes here
        queue<Node*> q;
        
        q.push(root);
        q.push(NULL);
        cout<<root->data<<" ";
    
        while(!q.empty())
        {
            Node* temp=q.front();

            if(temp==NULL)
            {
                q.pop();
                if(!q.empty())
                {
                    cout<<q.front()->data<<" ";
                    if(q.size()>1)
                        cout<<q.back()->data<<" ";
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
      
      return;

}