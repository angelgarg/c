#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("a=%d",a);
printf("b=%d",b);
    return 0;
}