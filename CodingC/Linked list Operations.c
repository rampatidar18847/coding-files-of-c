#include<stdio.h>
#include<stdlib.h>
struct node
{ 
   int data;
   struct node* link;
};
struct node* root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete(void);
void main()
{
  int ch;
while(1)
{
   printf("Single linked list Operations :\n");
   printf("1.Append\n");
   printf("2.Add at begin\n");
   printf("3.Add at after\n");
   printf("4.Length\n");
   printf("5.Disply\n");
   printf("6.Delete\n");
   printf("7.Quite\n");

   printf("Enter your choice : ");
   scanf("%d",&ch);

  switch(ch)
   {
    case 1 : append();
             break;
    case 2 : addatbegin();
             break;
    case 3 : addatafter();
             break;
    case 4 : len = length();
             printf("length : %d\n\n",len);
             break;
           
    case 5 : display();
             break;
            
    case 6 : delete();
             break;
            
    case 7 : exit(1);
    default: printf("invalid input\n");
            
    }
 }
}
void append()
{
   struct node* temp;
   temp = (struct node*)malloc(sizeof(struct node));
   printf("Enter node data\n");
   scanf("%d",&temp->data);
   temp->link = NULL;

   if(root == NULL)
   { 
     root = temp;
    }
     else
   {
     struct node* p;
     p= root;
    
    while(p->link != NULL)  
    {
      p = p->link;
    }
    p->link = temp;
  }
}
length()
{
   int count = 0;
   struct node* temp;
   temp = root;

   while(temp != NULL)
   {
     count ++;
     temp= temp->link;
   }
   return count ;
}

 void display()
{
  struct node* temp;
  temp = root;
  if(temp == NULL)
  {
    printf("List is empty\n\n");
  }
  else
  {
   while(temp!=NULL)
   {
     printf("%d-->",temp->data);
    temp = temp->link;
    }
     printf("\n\n");
  }
}

void addatbegin(void)
{
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node));

  printf(" Enter node data :\n");
  scanf("%d",&temp->data);
  temp->link = NULL;
  
  if(root == NULL)
  {
    root = temp;
  }
  else
  {
   temp->link = root;
   root= temp;
  }
}
 
void addatafter(void)
{
  struct node* temp,*p;
  int loc ,len,i= 1;

  printf("Enter location:");
  scanf("%d",&loc);

  len = length();
  if(loc > len)
  {
    printf("Invalid location");
    printf("currently list is having %d nodes\n",len);
  }
  else
  {
   p = root;
   while(i<loc)
   {
    p = p->link;
    i++;
   }
 temp= (struct node*)malloc(sizeof(struct node));

  printf("Enter node data :");
  scanf("%d",&temp->data);

  temp->link = p->link;
  p->link = temp;
}
}
void delete()
{
  struct node* temp;
  int loc;

  printf("Enter loc to delete:\n");
  scanf("%d",loc);

  if(loc > length())
  {
    printf("invalid location\n");
   }
   else if( loc == 1)
   {
     temp = root;
     root = temp->link;
    temp->link = NULL;
    free(temp);
    }
    else
    {
     struct node* p= root,*q;
    int i=1;
    while(i<loc-1)
    {
      p= p->link;
      i++;
    }
    q = p->link;
    p->link= q->link;
    q->link = NULL;
    free(q);
    }
}
