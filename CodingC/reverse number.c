
#include<stdio.h>
#include<math.h>
int main()
{
    int num,r, reverse=0;
   
    printf("print any number : ");
    scanf("%d",&num);
    
   while(num!=0)
 {
    r = num%10;
    reverse =reverse *10 +r;
    num = num/10;
    
    
  }
  printf("%d", reverse);
    
 
    
 
return 0;
}


    