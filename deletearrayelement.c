#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //delete arr[4]=5
    for(int i=4;i<9;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int j=0;j<9;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}