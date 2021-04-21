

    #include<stdio.h>

int main()
{
    int i,n,r,c,sum=0;
    printf("given number is : ");
    scanf("%d",&n);
    
     for(i=1;i<n;i++)
    {
        r =n%10;
        c =r*r*r;     
        sum = sum+c;
        n=n/10;
       
        }
      {
        printf("%d",sum);
       }
    if(n==sum)
    { printf("\narmstorng no.");
    }else{ printf("not Armstrong no.");
    }
        
return 0;
}

    