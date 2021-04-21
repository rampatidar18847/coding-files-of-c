#include<stdio.h>

#define CAPACITY 5

int stack[CAPACITY], top =-1;
//void push(int);
void main()
{
   int ch,item;
while(1)
{
    printf("Enter element to push:");
    scanf("%d",&item);
    push(item);
            
   } 
    
 
}
void push(int ele)
{
   if(top==CAPACITY-1)
   {
      printf("stack is overflow\n");
    }
    else
    {
       top++;
       stack[top] = ele;
       printf("%d pushed\n\n",ele);
    }
}