#include <stdio.h>
#include <stdlib.h>
//#include <iostream>
struct Node
{
    int val;
    Node* left;
    Node* right;
};

//duplicated code
//refactor
struct Node* create_node(int val)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    //Node* new_node = new Node;
    new_node->val = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
//traversal (duyet cay)
void traversal(Node* root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d->", root->val);
    traversal(root->left);
    traversal(root->right);
}
int main()
{
    struct Node* root = create_node(10);
    root->left = create_node(5);
    root->right = create_node(3);
    root->left->left = create_node(7);
    root->left->right = create_node(8);
    root->right->left = create_node(9);
    root->right->right = create_node(20);
    traversal(root);
    return 0;
}