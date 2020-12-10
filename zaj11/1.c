#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int max(a, b)
{
    if(a>b)
    return a;
    return b;
}

struct Node
{
    struct Node *left;
    struct Node *right;
    int val;
};

typedef struct Node Node;

void add(Node *root,int value)
{
    bool search=true;
    while(search)
    {
        if(root->val<value)
        {
            if(root->left==NULL) search=false;
            else root = root->left;
        }
        else
        {
            if(root->right==NULL) search=false;
            else root = root->right;
        }
    }

    if(root->val<value)
    {
        Node* next;
        next = malloc(sizeof(Node));
        root->left=next;
        next->val=value;
    }
    else
    {
        Node* next;
        next = malloc(sizeof(Node));
        root->right=next;
        next->val=value;
    }
}

int findMax(Node *root, int level)
{
    if(root->left!=NULL&&root->right!=NULL)
    return max(findMax(root->left, level+1),findMax(root->right, level+1));

    if(root->left!=NULL)
    {
        return findMax(root->left, level+1);
    }
    else
    if(root->right!=NULL)
    {
        return findMax(root->right, level+1);
    }

    return level;
}

int main()
{
    Node* root;
    root = malloc(sizeof(Node));
    root->left=NULL;
    root->right=NULL;
    root->val=15;

    add(root, 10);
    add(root, 12);
    add(root, 11);
    add(root, 19);
    add(root, 1);

    printf("%d", findMax(root, 1));
}
