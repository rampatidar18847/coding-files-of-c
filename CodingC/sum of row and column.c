

    #include<stdio.h>

int main()
{
    int a[3][3],b[3][3],i,j;
    int sum[10]={0},sum1[10]={0};
    
   
    
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
      sum[i]= sum[i]+a[i][j];
      sum1[i]= sum1[i]+a[j][i];
    }
    }
    
    printf("symmetric matrix is : \n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
       printf("%d ",a[i][j]);
    }
    printf("\t%d\n",sum[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
      printf("%d\t",sum1[i]);
    }
return 0;
}

    