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

vector<int> inorder_traverse(TreeNode *root)
{

    vector<int> ans;

    stack<TreeNode *> st;

    st.push(root);

    TreeNode *current = root->left;

    while (true)
    {
        if (current != NULL)
        {
            st.push(current);
            current = current->left;
        }
        else
        {
            if (st.empty())
                break;
            current = st.top();
            st.pop();
            ans.push_back(current->data);
            current = current->right;
        }
    }
    return ans;
}

vector<int> preorder_traverse(TreeNode *root)
{
    vector<int> ans;

    stack<TreeNode *> st;

    st.push(root);

    while (!st.empty())
    {
        TreeNode *current = st.top();
        st.pop();
        ans.push_back(current->data);

        if (current->right)
            st.push(current->right);
        if (current->left)
            st.push(current->left);
    }
    return ans;
}

vector<int> inorder_traverse2(TreeNode *root)
{
    vector<int> ans;
    TreeNode *current = root;

    stack<TreeNode *> st1;

    while (true)
    {

        if (current != NULL)
        {
            st1.push(current);
            current = current->left;
        }
        else
        {
            if (st1.empty())
                break;
            current = st1.top();
            ans.push_back(current->data);
            current = current->right;
            st1.pop();
        }
    }
    return ans;
}

vector<int> preorder_traverse2(TreeNode *root)
{
    vector<int> ans;

    TreeNode *current = root;

    stack<TreeNode *> st;

    st.push(current);

    while (!st.empty())
    {
        current = st.top();
        st.pop();

        ans.push_back(current->data);

        if (current->right)
            st.push(current->right);

        if (current->left)
            st.push(current->left);
    }

    return ans;
}

vector<int> postorder_traverse_2stack(TreeNode *root)
{
    stack<TreeNode *> st1;
    stack<TreeNode *> st2;

    vector<int> ans;

    st1.push(root);

    while (!st1.empty())
    {

        st2.push(st1.top());

        st1.pop();

        TreeNode *current = st2.top();

        if (current->left)
            st1.push(current->left);
        if (current->right)
            st1.push(current->right);
    }

    while (!st2.empty())
    {
        ans.push_back(st2.top()->data);
        st2.pop();
    }

    return ans;
}

int main()
{

    // Tree = 1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1

    TreeNode *root = createBinaryTree();

    vector<int> ans = postorder_traverse_2stack(root);

    // cout << endl
    //      << endl
    //      << "PostOrder Traversal: " << endl;

    for (int ele : ans)
    {
        cout << ele << " ";
    }

    return 0;
}