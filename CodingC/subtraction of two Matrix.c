

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
   
    
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
        c[i][j]=a[i][j]-b[i][j];
     }
        printf("subtraction of a[i][j]-b[i][j] :\n");
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

    