#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,6,7,8,9,10};
    //add "5" at index arr[4]
    for(int i=8;i>=4;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[4]=5;
    for(int j=0;j<=9;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}