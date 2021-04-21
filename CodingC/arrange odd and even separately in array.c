

    #include<stdio.h>

int main()
{
    int a[9],i,j,temp,n=9;
   
    
    printf("inter a[i] numbers : ");

     for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    
     i=0;
     j=n-1;
  
       while(i<j)
    {
       while(a[i]%2==0)
    { 
       i++;
    }
      while(a[j]%2!=0)
    { 
       j--;
    }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
      
    }
     
    
    
    for(i=0;i<n;i++)
    {    
   printf("%d ",a[i]);
}

  
        
return 0;
}

    