

    #include<stdio.h>

int main()
{
    int i,j,k,m,n,c=40,c2=32;
    printf("number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        for(j=1;j<=c/2-i;j++) 
        {
         printf(" ");
        }
         for( k=1;k<=2*i-1;k++)
        {
            printf("*");  
          }
            printf("\n");
        }
        for(i=1;i<=n;i++) 
    {
        for(j=1;j<=c2/2+i;j++) 
        {
         printf(" ");
        }
         for( k=5;k>=2*i-1;k--)
        {
            printf("*");  
          }
            printf("\n");
        }
return 0;
}

    