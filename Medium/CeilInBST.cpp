// Function to search a node in BST.
void InorderTraversal(Node* root, int input, int &y)
{
    if(root==NULL)
        return;
        
    InorderTraversal(root->left,input,y);
    
    if(root->data>=input and root->data<y)
    {
        y=root->data;
    }
    
    if(root->data>=input)
        return;
    
    InorderTraversal(root->right,input,y);
    
    return;
}


// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {
    
    // Your code here
    if (root == NULL) 
        return -1;
    
    int y=INT_MAX;
    
    InorderTraversal(root,input,y);
    
    if(y==INT_MAX)
        y=-1;
        
    return y;
}