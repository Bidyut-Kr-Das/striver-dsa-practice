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

void create_binary_tree_from_level_order(vector<int> levels, TreeNode *&root)
{
    queue<TreeNode *> q;

    int index = 0;
    root = new TreeNode(levels[index]);
    // cout << current->data << " ";
    index++;

    q.push(root);

    while (!q.empty())
    {
        TreeNode *current = q.front();

        q.pop();

        if (levels[index] != -1)
        {
            current->left = new TreeNode(levels[index]);
            index++;
            q.push(current->left);
        }

        if (levels[index] != -1)
        {
            current->right = new TreeNode(levels[index]);
            index++;
            q.push(current->right);
        }
    }

    cout << root->data << endl;
}

vector<int> inorder_traversal(TreeNode *root)
{

    if (root == NULL)
        return {};

    vector<int> ans;
    vector<int> temp = inorder_traversal(root->left);
    if (!temp.empty())
        for (int element : temp)
            ans.push_back(element);

    ans.push_back(root->data);

    temp = inorder_traversal(root->right);
    if (!temp.empty())
        for (int element : temp)
            ans.push_back(element);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // 11 1 2 3 4 5 -1 -1 -1 -1 -1 -1

    for (int ele : v)
        cout << ele << " ";

    cout << endl;
    TreeNode *root = NULL;

    create_binary_tree_from_level_order(v, root);

    cout << "Inorder traversal: " << endl;
    vector<int> ans = inorder_traversal(root);

    for (int ele : ans)
        cout << ele << " ";

    // queue<TreeNode *> q;

    // q.push(NULL);

    // cout << q.empty();

    return 0;
}