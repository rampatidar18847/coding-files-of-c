#include<stdio.h>

int main()
{
    char str[100];
    int i;
   
    scanf("%s",&str);
   for(i=0;i<strlen(str);i++)
     if(str[i]>=120 && str[i]<=123)
    { printf("%c",str[i]-23);
      }else{ printf("%c",str[i]+3);
    }
    
   

    
    
    return 0;
}