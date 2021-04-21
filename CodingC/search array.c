

    #include<stdio.h>

int main()
{
    int array[5],i, element;
   
    
    printf("inter numbers : ");
    
     for(i=0;i<5;i++)
    {
       scanf("%d",&array[i]);
     }
    printf("inter numbers to search : ");
    scanf("%d",& element);
    
    for(i=0;i<5;i++)
  {
    if(array[i]==element)
    {
    printf("found at location : %d",i);
    }
      } if(array[i]!=element)
        {
        printf("not found");
        }
        
return 0;
}

    