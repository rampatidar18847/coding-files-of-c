

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j;
   
    
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
  printf(" diagonal of a  matrix : \n");
        for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      if(i==j)
    printf("%d ",a[i][j]);
    }
    printf("");
    }
  
return 0;
}

    