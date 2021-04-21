
#include<stdio.h>
 int main() 
{ 
   int c;
   FILE *file;
   file= fopen("newfile.txt","w");
   fprintf(file,"%s","we love");
   fclose(file);


   file = fopen("newfile.txt","r");
   if(file)
    {
      while((c=getc(file))!=EOF)
           putchar(c);
        fclose(file);
    }
    printf("\n");
    file = fopen("newfile.txt","a");
    fprintf(file,"%s","our country");
    fclose(file);
    
    file =fopen("newfile.txt","r");
   if(file)
    {
      while((c=getc(file))!=EOF)
           putchar(c);
        fclose(file);
    }
    }
    
            
   