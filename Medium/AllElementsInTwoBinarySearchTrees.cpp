void InorderTraversal(TreeNode* root, vector<int> &a)
{
    if(root==NULL)
    {
        return;
    }

    InorderTraversal(root->left,a);
    a.push_back(root->val);
    InorderTraversal(root->right,a);
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

    vector<int> AllElements;

    InorderTraversal(root1,AllElements);
    InorderTraversal(root2,AllElements);

    sort(AllElements.begin(),AllElements.end());

    return AllElements;
}