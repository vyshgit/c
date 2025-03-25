#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left,*right;
};
struct node * getnode(int val)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* insertnode(struct node *root,int  val)
{
    if(root==NULL)
        return getnode(val);
    else if(root->data>val)
        root->left=insertnode(root->left,val);
    else    
        root->right=insertnode(root->right,val);
    return root;
}
struct node * findmin(struct node *node)
{
    struct node *current=node;
    while(current && current->left!=NULL)
    {
        current=current->left;
    }
    return current;
}
struct  node*deletenode(struct node *root,int data)
{
    if(root==NULL)
    {
        printf("Tree is empty");
        return root;
    }
    if(data<root->data)
    {
        root->left=deletenode(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=deletenode(root->right,data);
    }
    else
    {
        if(root->left==NULL)
        {
            struct node* temp=root->right;
            free(root);
            return temp;

        }
        else if(root->right==NULL)
        {
            struct  node* temp=root->left;
            free(root);
            return temp;
        }
        struct node* temp=findmin(root->right);
        root->data=temp->data;
        root->right=deletenode(root->right,temp->data);
    }
    return root;
}
void display(struct node*root)
{
    if(root!=NULL)
    {
        display(root->left);
        printf("%d\t",root->data);
        display(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    int ch,val;
    printf("\nBST\n1.Insert\n2.Delete\n3.Display\n4.Exit");
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter value to insert:");
                    scanf("%d",&val);
                    root=insertnode(root,val);
                    break;
            case 2: printf("Enter the value to  delete:");
                    scanf("%d",&val);
                    deletenode(root,val);
                    break;
            case 3: display(root);
                    break;
            case 4: printf("Exiting program\n");
                    return 0;
            default:   printf("Invalid choice\n");
        }
    }
}