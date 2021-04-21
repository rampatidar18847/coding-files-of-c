#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i,word_count=1;
    gets(str);


    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            word_count++;
    }
    printf("%d\n",word_count);

    return 0;
}