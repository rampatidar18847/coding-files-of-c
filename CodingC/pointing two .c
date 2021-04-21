#include<stdio.h>

int main()
{
    int X,Y;
    int*px,*py;
    X=100;
    Y=200;
    px=&X;
    py=&Y;
printf("%d ",*px);
printf("%d",*py);
    return 0;
}