

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j,sum=0;
   
    
    printf("inter element  : ");

     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
       scanf("%d",&a[i][j]);
    }
    }
    printf("matrix is : \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d  ",a[i][j]);
}
     printf("\n");
}
  printf(" sum  of a upper triangular matrix : ");
        for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      if(i<j)
    sum= sum+a[i][j];
    }
    }
    printf("%d ",sum);
    
    printf("");
    
  
return 0;
}

    