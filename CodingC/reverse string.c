#include<stdio.h>

int main()
{
    char str[100];
    int length,i;
   
    scanf("%s",&str);
    length= strlen(str);
    for(i=length;i>=0;i--)
    {
    printf("%c",str[i]);
    }
    
    return 0;
}