#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
}*ptr,*head=NULL,*ptr1;
void create(){
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
}
int isEmpty()
{
    if(head==NULL)
        return 1;
    else
        return 0;
}
void enQueue()
{
    if(!isEmpty())
    {
        ptr1=head;
        while(ptr1->next!=NULL)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
    }
    else
    {
        head=ptr;
    }
}
int  deQueue()
{
    ptr1=head;
    head=ptr1->next;
    int x=ptr1->data;
    free(ptr1);
    return x;
}
void display()
{
    printf("Current Queue:\n");
    ptr1=head;
    while(ptr1!=NULL)
    {
        printf("%d\n",ptr1->data);
        ptr1=ptr1->next;
    }
}
void main()
{
    int ch=0;
    do
    {
        printf("\nQueue using Linked list:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create();
                    enQueue();
                    break;
            case 2: if(isEmpty())
                        printf("\033[31mEmpty  queue\033[0m\n");
                    else
                    {
                        printf("\nDequeued element:%d\n",deQueue());
                    }
                    break;
            case 3: if(isEmpty())
                        printf("Queue empty\n");
                    else 
                        display();
            case 4: break;
            default:    printf("Invalid choice\n");
            
        }   

    } while (ch!=4);
    
}