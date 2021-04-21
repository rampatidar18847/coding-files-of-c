#include<stdio.h>

 main()
{
    FILE *fp;
    
    fp= fopen("Myfile.txt","w");
    fprintf(fp,"%d",100);
    fclose(fp);
  
}