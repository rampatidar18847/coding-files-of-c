#include<stdio.h>

int main(){
    int  a=0,b=1,n,temp;
    scanf("%d",&n);
    
    while(a<=n)
    { 
    printf("%d ",a);
      temp = a;
       a = b;
       b = b +temp;
    
      
       
        
        
        
      
      }
       
    
return 0;
}



    