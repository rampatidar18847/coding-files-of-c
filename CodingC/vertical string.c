#include<stdio.h>

int main()
{
    char str[100];
    int i;
   
    scanf("%s",&str);
   for(i=0;i<=strlen(str);i++)
   {
   
    printf("%c", str[i]);
    printf("\n");
    }
    
    
    return 0;
}