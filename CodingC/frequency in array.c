

    #include<stdio.h>

int main()
{
    int array[5],i,count=0,n;
   
    printf("frequency of given no.");
    scanf("%d",&n);
    printf("inter numbers : ");
    
    
     for(i=0;i<5;i++)
    {
       scanf("%d",&array[i]);
    
     if(array[i]==n)
        count++;
    }
    {
    printf("frequency of%d is :%d ",n,count);
    }
    
  
        
return 0;
}

    