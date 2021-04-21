

    #include<stdio.h>

int main()
{
    int array[7];
    int j,i,count, temp,k,n=7;
   
    
    printf("inter numbers : ");
    
     for(i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
      
     }
    for(i=0;i<n;i++)
  
    for(j=i+1;j<n;j++)
    
      if(array[i]==array[j])
    {
      for(k=j+1 ;k<n;k++)
       array[k-1]=array[k];
    
    j--;
    n--;
    }
           
    for(i=0;i<n;i++)
  {
   printf("%d",array[i]);
}
   
    
        
return 0;
}

    