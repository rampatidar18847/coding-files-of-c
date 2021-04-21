#include<stdio.h>

int main()
{
    int myArray[5];
    int i,e_sum=0,o_sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&myArray[i]);
        if(myArray[i]%2==0)
            e_sum+=myArray[i];//sum of even numbers
        else
            o_sum+=myArray[i];//sum of odd numbers
   }
    printf("Values in array: ");
   for(i=0;i<5;i++)
   {
       printf("%d ",myArray[i]);
    }
    printf("\n");
    printf("Sum of odd values: %d\n",o_sum);
    printf("Sum of even values: %d\n",e_sum);
    return 0;
}

    