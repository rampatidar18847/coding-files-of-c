

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,c[3][3],flag=0;
   
    
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
    
      for(j=0;j<3;j++)
    {
      if(a[i][j]!=b[i][j])
         flag=1;
        }
        if(flag==0)
        printf("\n the matrix is equal");
        else
        printf("\n the matrix is not equal");
        
return 0;
}

    