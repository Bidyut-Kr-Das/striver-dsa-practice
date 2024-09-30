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

vector<int> in_order_traverse(TreeNode *root)
{
    if (root == NULL)
        return {};

    vector<int> ans;

    // logic is Left-> TreeNode-> Right <-inorder

    vector<int> sub_tree = in_order_traverse(root->left);
    if (!sub_tree.empty())
        for (int ele : sub_tree)
            ans.push_back(ele);

    ans.push_back(root->data);

    sub_tree = in_order_traverse(root->right);
    if (!sub_tree.empty())
        for (int ele : sub_tree)
            ans.push_back(ele);

    return ans;
}

vector<int> pre_order_traverse(TreeNode *root){
    if(root==NULL)
        return {};
    
    vector<int> ans;
    
    ans.push_back(root->data);

    vector<int> sub_tree = pre_order_traverse(root->left);
    if(!sub_tree.empty())
        for(int element:sub_tree)
            ans.push_back(element);

    sub_tree = pre_order_traverse(root->right);
    if(!sub_tree.empty())
        for(int element:sub_tree)
            ans.push_back(element);
    
    return ans;

}

vector<int> post_order_traverse(TreeNode *root){
    if(root==NULL)
        return {};
    
    vector<int> ans;

    vector<int> sub_tree = post_order_traverse(root->left);
    if(!sub_tree.empty())
        for(int ele:sub_tree)
            ans.push_back(ele);
    
    sub_tree = post_order_traverse(root->right);
    if(!sub_tree.empty())
        for(int ele:sub_tree)
            ans.push_back(ele);
    
    ans.push_back(root->data);

    return ans;
}

int main()
{

    // Tree = 10 7 4 -1 -1 5 -1 -1 9 6 -1 -1 -1

    TreeNode *root = createBinaryTree();

    cout << endl
         << endl
         << "Inorder traversal: " << endl;
         
    vector<int> inorder_ans = in_order_traverse(root);
    for (int ele : inorder_ans)
        cout << ele << " ";
    
    cout << endl
         << endl
         << "Preorder traversal: " << endl;

    vector<int> preorder_ans = pre_order_traverse(root);
    for (int ele : preorder_ans)
        cout << ele << " ";


    cout << endl
         << endl
         << "Postorder traversal: " << endl;

    vector<int> postorder_ans = post_order_traverse(root);
    for (int ele : postorder_ans)
        cout << ele << " ";
    cout << endl;

    return 0;
}