
#include<stdio.h>
#include<math.h>
int main()
{
    int num, product=1;
   
    printf("print any number : ");
    scanf("%d",&num);
    
   while(num!=0)
 {
    product =product * (num%10);
    num = num/10;
    
    
  }
  printf("%d", product);
    
 
    
 
return 0;
}


    