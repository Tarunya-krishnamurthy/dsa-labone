#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct stack
{
    int top;
    int data[SIZE];

};
typedef struct stack STACK;
void push(STACK *s,int item)
{
    if(s->top==SIZE-1)
        printf("\n stack over flow");
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
    }
}
void pop(STACK *s)
{
    if(s->top==-1)
        printf("\n stack underflow");
    else
    {
        printf("\n element poped is %d", s->data[s->top]);
        s->top=s->top-1;
    }
}
void display(STACK s)
{
    if(s.top==-1)
        printf("\n stack empty");
    else
    {
        printf("\n stack content are \n");
        for(int i=s.top;i>=0;i--)
        printf("%d\n",s.data[i]);
    }
}
int main()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
    {
        printf("\n 1.push\n");
        printf("\n 2.pop\n");
        printf("\n 3.Display\n");
        printf("\n 4.Exit\n");
        printf("\n read the choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n read the item to be pushed:");
                   scan f("%d",&item);
                   push(&s,item);
                   break;
            case 2: pop(&s);
                   break;
            case 3:
                   display(s);
            default:exit(0);
       }
    }
    return 0;
}
