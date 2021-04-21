#include<stdio.h>

int main()
{
    char str[100];
    int i;

    scanf("%s",&str);
    for(i=0; i<strlen(str); i++)
        if(str[i]>=65 && str[i]<=90)
        {   printf("%c",str[i]+32);
        } else {
            printf("%c",str[i]-32);
        }





    return 0;
}