

    #include<stdio.h>

int main()
{
    int array[10];
    int j,i,count;
   
    
    printf("inter numbers : ");
    
     for(i=0;i<5;i++)
    {
       scanf("%d",&array[i]);
      
     }
    for(i=0;i<5;i++)
  {
     count=0;
    for(j=0;j<5;j++)
    
      if(array[i]==array[j])
      count++;
   
      if(count!=1)
   printf(" dublicat element : %d ",array[i]);


}
        
return 0;
}

    