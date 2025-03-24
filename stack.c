#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char stack[100],post[100],expe[100];
int top=-1,i=0,j=0,a,b;
int arr[100];
void push(char y)
{
    stack[++top]=y;
}
char pop()
{
    char x=stack[top];
    top--;
    return x;
}
int precedence(char y)
{
    switch(y)
    {
        case '*':

        case '/':   
                    return 2;
                    break;
        case '+':

        case '-':   
                    return 1;
                    break;
        default :   
                    return 0;
    }
}
//push int
void puint(int x)
{
    arr[++top]=x;
}
int popint()
{
    return arr[top--];
}
int main()
{
    printf("Enter the expression:");
    fgets(expe,100,stdin);
    while(expe[i]!='\0')
    {
           char x=expe[i];
           switch(x)
           {
            case '(' :  push(x);
                        break;
            case ')' :
                        while(stack[top]!='(')
                        {
                            post[j++]=pop();
                        }
                        top--;
                        break;
            case '+' :
            case '-' :
            case '/' :
            case '*' :
                        while(top!=-1 && precedence(stack[top])>=precedence(x))
                        {
                            post[j++]=pop();
                        }
                        push(x);
                        break;
            default  :
                        post[j++]=x;
            }
        i++;
    }
    while(top!=-1)
    {
        post[j++]=pop();
    }
    i=0;
    printf("Infix:");
    while(post[i]!='\0'){
        if(post[i]=='\n'){
            
        }
        else{
            printf("%c",post[i]);
        }
        
        i++;
    }
     
    i=j=0;
    top=-1;

    int temp2;
    printf("\nEnter the postfix expression to evaluate(use space to separate each operands and operators):");
    fgets(expe,100,stdin); 
    i=0;
    char *token=strtok(expe," ");
    while(token!=NULL)
    {  
        switch(*token)
        {
            case '+':   a=popint();
                        
                        b=popint();
                        puint(b+a);
                        break;
            case '-':   a=popint();
                        b=popint();
                        puint(b-a);
                        break;
            case '*':   a=popint();
                        b=popint();
                        puint(b*a);
                        break;
            case '/':   a=popint();
                        b=popint();
                        puint(b/a);
                        break;
            case ' ':   break;
            default: 
                        temp2=atoi(token);
                        puint(temp2);
        }
              token=strtok(NULL," ");
    }
   printf("\nAnswer:%d\n",arr[top]);
    return 0;
}