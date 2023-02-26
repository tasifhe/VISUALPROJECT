#include<bits/stdc++.h>

using namespace std;
#define COUNT 10

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
};

void print2DUtil(Node* root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(Node* root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}

int main()
{
    Node *root = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *sixth = NULL;
    Node *seventh = NULL;
    Node *eighth = NULL;
    Node *ninth = NULL;

    root = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();
    seventh = new Node();
    eighth = new Node();
    ninth = new Node();

    root->data = 8;
    root->left = second;
    root->right = third;
    third->left = NULL;
    third->right = fourth;
    fourth->left = fifth;
    fourth->right = NULL;
    second -> right = sixth;
    second->left = seventh;
    sixth->left = eighth;
    sixth->right = ninth;
    seventh->left = NULL;
    seventh->right = NULL;
    eighth->left = NULL;
    eighth->right = NULL;
    ninth->left = NULL;
    ninth->right = NULL;
    fifth->left = NULL;
    fifth->right = NULL;

    root->left->data = 3;
    root->right->data = 10;
    root->left->left->data = 1;
    root->left->right->data = 6;
    root->right->right->data = 14;
    root->left->right->left->data = 4;
    root->left->right->right->data = 7;
    root->right->right->left->data = 13;

    print2D(root);

    return 0;
}