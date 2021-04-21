
#include<stdio.h>
#include<math.h>
int main()
{
    int num,r, sum=0;
   
    printf("print any number : ");
    scanf("%d",&num);
    
   while(num!=0)
 {
    r = num%10;
    sum =sum +r;
    num = num/10;
    
    
  }
  printf("%d", sum);
    
 
    
 
return 0;
}


    