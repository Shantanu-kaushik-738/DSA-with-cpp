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

    return root; // connect with parent root
}

void preOrder(Node *root)
{ // O(n)
    if (root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{ // O(n)
    if (root == NULL) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{ // O(n)
    if (root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    Node *root = build_tree(vec);
    preOrder(root); // root, left, right
    cout << endl;

    inOrder(root); // left, root, right
    cout << endl;

    postOrder(root); // left, right, root
    cout << endl;

    return 0;
}
