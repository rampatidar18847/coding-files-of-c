

    #include<stdio.h>

int main()
{
    int i,n,r,sum=0;
    printf("given number is : ");
    scanf("%d",&n);
    
     for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum = sum+i;
       
        }
      {
        printf("%d",sum);
       }
    if(n==sum)
    { printf("\nperfect no.");
    }else{ printf("not perfect no.");
    }
        
return 0;
}

    