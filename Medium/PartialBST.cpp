
void Inorder(BinaryTreeNode<int>* root, vector<int> &a)
{
    if(root==NULL)
    {
        return;
    }

    Inorder(root->left,a);
    a.push_back(root->data);
    Inorder(root->right,a);

    return;
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<int> b;

    Inorder(root,b);
    int n=b.size();

    for(int i=1; i<n; i++)
    {
        if(b[i]<b[i-1])
            return false;
    }

    return true;
}