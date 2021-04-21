
#include<stdio.h>
#include<math.h>
int main()
{
    int num,r, i, count =0;
   
    printf("print any number : ");
    scanf("%d",&num);
   printf("print any number to find its frequency : ");
   scanf("%d",&i);
    
   while(num!=0)
 {
    r = num%10;
    if(r==i)
    count++;
    num = num/10;
    
    }
     printf("%d", count);
    
 
    
 
return 0;
}


    