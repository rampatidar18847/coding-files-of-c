#include<stdio.h>
  

  struct book{  
int id;
char title[50];
char author[20];
};

int main(){
   
    struct book book1;
   
    printf("inter id :");
    scanf("%d",&book1.id);
    printf("inter title :");
    scanf("%s",&book1.title);
    printf("inter author name :");
    scanf("%s",&book1.author);
    
    struct book book2;
    printf("inter id :");
    scanf("%d",&book2.id);
    printf("inter title :");
    scanf("%s",&book2.title);
    printf("inter author name :");
    scanf("%s",&book2.author);
    
    printf("**information of book book1**\n");
    
    printf("id : %d\n",book1.id);
    printf(" title : %s\n",book1.title);
    printf("author : %s\n",book1.author);
    
    printf("**information of book book2**\n");
    printf("id : %d\n",book2.id);
    printf(" title : %s\n",book2.title);
    printf("author : %s\n",book2.author);
    
  
return 0;
}