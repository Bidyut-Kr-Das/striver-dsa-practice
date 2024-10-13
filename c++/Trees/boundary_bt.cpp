#include <bits/stdc++.h>
using namespace std;


class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

TreeNode* create_bt(){
    int data;
    cin>>data;
    if(data==-1)
        return NULL;
    
    TreeNode * root = new TreeNode(data);
    
    root->left = create_bt();
    root->right = create_bt();
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // 5 1 2 3 4 5
    return 0;
}