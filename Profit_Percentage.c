#include<stdio.h>
int main()
{
    float x,y,a;
    float c;
    scanf("%f%f",&x,&y);
    a=y-x;
    c=((a*100)/x);
    printf("%.2f",c);
}