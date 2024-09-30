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

void level_order_traversal(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    cout << endl
         << "Level Order traversal: " << endl;
    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);

        if (current->right)
            q.push(current->right);
    }
}

void reverse_level_order_traversal(TreeNode *root)
{
    queue<TreeNode *> q;
    vector<int> vec;

    q.push(root);
    q.push(NULL);

    cout << endl
         << "Reverse level order traversal: " << endl;
    while (!q.empty())
    {
        TreeNode *current = q.front();
        q.pop();

        if (current == NULL)
        {
            vec.push_back(-1);
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            vec.push_back(current->data);

            if (current->right)
                q.push(current->right);

            if (current->left)
                q.push(current->left);
        }
    }

    reverse(vec.begin(), vec.end());
    for (auto ele : vec)
    {
        if (ele == -1)
        {
            cout << endl;
            continue;
        }
        cout << ele << " ";
    }
}

int main()
{
    // Tree = 10 7 4 -1 -1 5 -1 -1 9 6 -1 -1 -1

    TreeNode *root = createBinaryTree();
 
    level_order_traversal(root);

    reverse_level_order_traversal(root);
    
    return 0;
}