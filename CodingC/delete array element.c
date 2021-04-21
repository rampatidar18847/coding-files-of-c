

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
  
    printf("location in array : ");
    scanf("%d",&loc);
    
    for(i=loc ;i<size-1;i++)
    {
       array[i]=array[i+1];
    }
           
    for(i=0;i<size-1;i++)
  {
   printf("%d",array[i]);
}
  
        
return 0;
}

    