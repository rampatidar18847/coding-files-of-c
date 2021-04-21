

    #include<stdio.h>

int main()
{
    int a[5],i,j,temp,m=5;
   
    
    printf("inter a[i] numbers : ");

     for(i=0;i<m;i++)
    {
       scanf("%d",&a[i]);
    }
    
      for(i=0;i<m-1;i++)
    {
       for(j=0;j<m-1-i;j++)
  {
      if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
     }
    }
    for(i=0;i<m;i++)
    {    
   printf("%d ",a[i]);
}

  
        
return 0;
}

    