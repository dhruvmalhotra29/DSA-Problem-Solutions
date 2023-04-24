// Function to search a node in BST.
void InorderTraversal(Node* root, int x, int &y)
{
    if(root==NULL)
        return;
        
    InorderTraversal(root->left,x,y);
    
    if(root->data<=x and root->data>y)
    {
        y=root->data;
    }
    
    if(root->data>=x)
        return;
    
    InorderTraversal(root->right,x,y);
    
    return;
}
int floor(Node* root, int x) {
    
    int y=-1;
    InorderTraversal(root,x,y);
    
    return y;
    // Code here
}