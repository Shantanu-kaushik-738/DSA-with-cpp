#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node *build_tree(vector<int> preorder)
{
    idx++;
    if (preorder[idx] == -1) return NULL;

    Node *root = new Node(preorder[idx]);
    root->left = build_tree(preorder);  // complete left tree
    root->right = build_tree(preorder); // complete right tree

    return root;                        // connect with parent root
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    Node* root = build_tree(vec);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    return 0;
}
