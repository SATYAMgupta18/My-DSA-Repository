node *inOrder_Predecessor(node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *deleting(node *root, int key)
{
    // Base case.
    if (root == NULL)
    {
        return NULL;
    }

    // Searching for the node to be deleted.
    if (root->val > key)
    {
        root->left = deleting(root->left, key);
    }
    else if (root->val < key)
    {
        root->right = deleting(root->right, key);
    }
    // Deleting the found node.
    else
    {
        // Case 1: No child. Leaf node found.
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // Case 2: 1 child.
        else if (root->left == NULL)
        {
            node *ptr = root;
            root = root->right;
            delete ptr;
        }
        else if (root->right == NULL)
        {
            node *ptr = root;
            root = root->left;
            delete ptr;
        }
        // Case 3: 2 children.
        else
        {
            node *iPre = inOrder_Predecessor(root);
            root->val = iPre->val;
            root->left = deleting(root->left, iPre->val); // deleting the duplicate from the left subtree.
        }
    }
    return root;
}
