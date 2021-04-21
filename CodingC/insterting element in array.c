

    #include<stdio.h>

int main()
{
    int array[100],i,key,loc,size;
   
    printf("enter size: ");
    scanf("%d",&size);
    printf("inter numbers : ");
    
     for(i=0;i<size;i++)
    {
       scanf("%d",&array[i]);
     }
    
    printf("no.to inter in array :");
    scanf("%d",&key);
    printf("location in array : ");
    scanf("%d",&loc);
    
    for(i=size ;i>=loc;i--)
    {
       array[i+1]=array[i];
    }
       array[loc]=key;
        
    
      
    for(i=0;i<=size;i++)
  {
   printf("%d",array[i]);
}
  
        
return 0;
}

    