
#include<stdio.h>
#include<math.h>
int main()
{
    int num,first,last,count;
    
    printf("print any number : ");
    scanf("%d",&num);
    
    count = log10(num);
    
    first = num/pow(10,count);
    last = num%10;
    
    printf("%d\n%d",first  ,last );
 
return 0;
}


    