
#include<stdio.h>

int main()
{
    int i,j,k,l,m;
    for(i=1;i<=5;i=i+2) //outer loop       
    {
        for(j=1;j<=i;j=j+2) //inner loop
           printf(" ");
        {
          for(k=i;k<=5;k++)
          printf("*");
        
         
       }
    
       printf("\n");
    }
       printf(" ");
      for(j=3;j<=5;j=j+2) 
    {   
       printf(" ");
       for(m=1;m<=j;m++)
    {
           printf("*");
        
    }
    printf("\n");
    }
     
    

 
return 0;
}


    