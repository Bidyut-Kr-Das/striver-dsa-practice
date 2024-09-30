#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *createBinaryTree()
{
    TreeNode *root = NULL;
    int data;
    cout << "Data: ";
    cin >> data;
    if (data == -1) //-1 means leaf node
        return NULL;

    root = new TreeNode(data);
    cout << "Enter data left to the node " << data << endl;
    root->left = createBinaryTree();

    cout << "Enter data right to the node " << data << endl;
    root->right = createBinaryTree();

    return root;
}

int main()
{
  
    // Tree = 10 7 4 -1 -1 5 -1 -1 9 6 -1 -1 -1

    TreeNode *root = createBinaryTree();

    return 0;
}