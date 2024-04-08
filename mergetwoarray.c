#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,10};
    int crr[10];
    for(int i=0;i<5;i++)
    {crr[i]=arr[i];}
    for(int j=0;j<5;j++)
    {crr[5+j]=brr[j];}

    for(int k=0;k<=9;k++)
    {printf("%d ",crr[k]);}
}