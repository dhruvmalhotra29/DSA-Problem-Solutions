void Inorder(Node* root, int &k, vector<int> &arr)
    {
        if(root==NULL)
        {
            return;
        }

        Inorder(root->left,k,arr);
     	arr.push_back(root->data);
        Inorder(root->right,k,arr);

        return;
    }


int KthLargest(Node* root, int k)
{
	// Write your code here.

        vector<int> arr;
        Inorder(root,k,arr);

		int n=arr.size();
        return arr[n-k];
}