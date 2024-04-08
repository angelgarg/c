#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},brr[10];
    for(int i=0;i<=9;i++)
    {
        brr[i]=arr[10-i];
    }
    for(int j=0;j<=9;j++)
    {
    printf("%d ",&brr[j]);
    }
    return 0;
}