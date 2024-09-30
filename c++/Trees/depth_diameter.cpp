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
    // cout << "Data: ";
    cin >> data;
    if (data == -1) //-1 means leaf node
        return NULL;

    root = new TreeNode(data);
    // cout << "Enter data left to the node " << data << endl;
    root->left = createBinaryTree();

    // cout << "Enter data right to the node " << data << endl;
    root->right = createBinaryTree();

    return root;
}

int find_max_height(TreeNode *root){

    if (root == NULL)
        return 0;

    int left = find_max_height(root->left);

    int right = find_max_height(root->right);

    return max(left, right) + 1;
}

int diameter_unoptimised(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int a = diameter_unoptimised(root->left);
    int b = diameter_unoptimised(root->right);

    int c = find_max_height(root->left) + 1 + find_max_height(root->right);

    return max(a, max(b, c));
}

pair<int, int> diameter_height_pair_optimised(TreeNode *root)
{
    if (root == NULL)
        return make_pair(0, 0);

    pair<int, int> left = diameter_height_pair_optimised(root->left);

    pair<int, int> right = diameter_height_pair_optimised(root->right);

    int left_tree_diameter = left.first;
    int right_tree_diameter = right.first;

    int full_diameter = left.second + 1 + right.second;

    int final_diameter = max(left_tree_diameter, max(right_tree_diameter, full_diameter));

    int final_height = max(left.second, right.second) + 1;

    return make_pair(final_diameter, final_height);
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];
    // 10 7 4 -1 -1 5 -1 -1 9 6 -1 -1 -1

    TreeNode *root = createBinaryTree();

    int max_height = find_max_height(root);

    cout << diameter_unoptimised(root) << endl;

    cout << diameter_height_pair_optimised(root).first << endl;

    return 0;
}