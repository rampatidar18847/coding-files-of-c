#include<stdio.h>

int main()
{int x ,y,max;

    
     printf("input x, and y values : ");
     scanf("%d%d",&x,&y);
    
   max=(x>y)?x:y;
   
 printf("%d",max);
   

while(1){
 if(max%x==0 && max%y ==0)
{
  printf("LCM of x and y is : %d ",max);
break;
}
 ++max;
}
    
    return 0;
    }