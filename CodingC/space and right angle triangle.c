

    #include<stdio.h>

int main()
{
    int i,j,k,m;
    for(i=0;i<5;i++) 
    {
        for(j=i;j<5;j++) 
        {
         printf(" ");
        }
         for( k=i;k>=0;k--)
        {
            printf("*");  
          }
            printf("\n");
        }
        
return 0;
}

    