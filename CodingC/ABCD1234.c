

    #include<stdio.h>

int main()
{
    int i,j;
    
    char k;
    
    for(i=1;i<=4;i++) 
      
    {
       k='A';
        for(j=1;j<=7;j++)
            
        { 
        if(j>=0+i&&j<=8-i){
           if(j==5)
            k='1';
           printf("%c",k);  
           k++;
           }
         else
            printf(" ");
          }
        
        
          
            printf("\n");
        }
        
return 0;
}

    