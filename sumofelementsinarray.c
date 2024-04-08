#include<stdio.h>
int main()
{
    int sum,arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}