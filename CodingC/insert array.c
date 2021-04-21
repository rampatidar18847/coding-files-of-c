

    #include<stdio.h>

int main()
{
    int array[5],i,key,loc;
   
    
    printf("inter numbers : ");
    
     for(i=0;i<5;i++)
    {
       scanf("%d",&array[i]);
     }
    
    printf("no.to inter in array :");
    scanf("%d",&key);
    printf("location in array : ");
    scanf("%d",&loc);
    
    for(i=4 ;i>=loc;i--)
    {
       array[i+1]==array[i];
    }
       array[loc]=key;
    
      
    for(i=0;i<5;i++)
  {
   printf("%d",array[i]);
}
  
        
return 0;
}

    