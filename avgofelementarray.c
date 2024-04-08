#include <stdio.h>
int main()
{
    float sum,arr[10]={11,23,4,2,1,21,65,43,24,32};
    float avg;
    for(int i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/10;
    printf("%0.2f",avg);
    return 0;
}