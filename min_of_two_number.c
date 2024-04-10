#include <stdio.h>
int minimum(int a,int b)
{
    int min=a;
    if(b<a)
    {
        min=b;
    }
    return min;
}
int main()
{ int mini;
    mini=minimum(2,5);
    printf("%d",mini);
    return 0;
}