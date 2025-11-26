#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};
typedef struct node*NODE;


NODE createBST(NODE root,int key)
{
    NODE temp, cur, prev;
    temp = (NODE)malloc(sizeof(struct node));
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
        return temp;

    cur=root;
    prev=NULL;

    while (cur!=NULL)
    {
        prev=cur;

        if (key<cur->data)
            cur=cur->left;
        else
            cur=cur->right;
    }

    if (key<prev->data)
        prev->left=temp;
    else
        prev->right=temp;

    return root;
}

void preorder(NODE root)
{
    if (root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(NODE root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(NODE root)
{
    if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
 {
    NODE root=NULL;
    int item,ch;

    for (;;)
    {
        printf("\n1. Insert");
        printf("\n2. Preorder");
        printf("\n3. Inorder");
        printf("\n4. Postorder");
        printf("\n5. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter item to be inserted: ");
                scanf("%d", &item);
                root = createBST(root,item);
                break;

            case 2:
                printf("\nPreorder Traversal: ");
                preorder(root);
                break;

            case 3:
                printf("\nInorder Traversal: ");
                inorder(root);
                break;

            case 4:
                printf("\nPostorder Traversal: ");
                postorder(root);
                break;

            default:
                exit(0);
        }
    }
    return 0;
}
