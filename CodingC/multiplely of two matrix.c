

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,k,c[3][3]={0};
   
    
    printf("inter element a[i][j]: ");

     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      
       scanf("%d",&a[i][j]);
    }
    }
    printf("matrix a[i][j] is : \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d  ",a[i][j]);
}
     printf("\n");
}
  
   printf("inter element  b[i][j]: ");

     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
       scanf("%d",&b[i][j]);
    }
    }
    printf("matrix b[i][j] is : \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d  ",b[i][j]);
}
     printf("\n");
}
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
    for(k=0;k<3;k++)
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
     }
    }
        printf("multiplely of a[i][j]*b[i][j] :\n");
        for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d  ",c[i][j]);
}
   printf("\n");
}
return 0;
}

    