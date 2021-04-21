

    #include<stdio.h>

int main()
{
    int a[100],b[100],i,m=5,n=4;
   
    
    printf("inter a[i] numbers : ");
    
     for(i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("inter b[i] numbers : ");
      for(i=0;i<n;i++)
    {
       scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
       a[m+i]=b[i];
    }
    printf("mareged array is :");
    for(i=0;i<m+n;i++)
  {
   printf("%d ",a[i]);

  }
        
return 0;
}

    