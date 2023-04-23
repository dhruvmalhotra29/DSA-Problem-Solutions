void Inorder(Node* root, vector<Node*> &arr)
{
    if(root==NULL)
    {
        return;
    }
    
    Inorder(root->left,arr);
    arr.push_back(root);
    Inorder(root->right,arr);
    
    
    return;
}
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    vector<Node*> arr;
    Inorder(root,arr);
    
    int idxP=-1,idxS=-1;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]->key<key)
        {
            idxP=i;
        }
        if(arr[i]->key>key)
        {
            idxS=i;
            break;
        }
    }
    
    pre=NULL;
    suc=NULL;
    
    int n=arr.size();
    
    if(idxP>=0)
    {
        pre=arr[idxP];
    }
    
    if(idxS!=-1)
    {
        suc=arr[idxS];
    }
    
    return;

}