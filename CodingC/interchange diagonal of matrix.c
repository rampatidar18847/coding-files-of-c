

    #include<stdio.h>

int main()
{
    int a[3][3],i,j,n=0,temp;
   
    
    printf("inter element  : ");

     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
       scanf("%d",&a[i][j]);
    }
    }
    printf("before interchange of diagonal matrix is : \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d  ",a[i][j]);
}
     printf("\n");
}
  n=3-1;
for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    { 
      if(i==j)
    {
       temp = a [i][j];
       a[i][j]= a[i][n];
       a[i][n]= temp;
       n--;
    }
    }
    }
    printf("after interchange diagonal of matrix is:\n");
        for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
    }
return 0;
}

    