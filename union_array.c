#include <stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[7]={3,4,5,6,7,8,9};
    int urr[12];

    for(int i=0;i<5;i++)
    {urr[i]=arr[i];}
    int urr_index=5;

    for(int j=0;j<7;j++)
    {
        int found=0;
        for(int k=0;k<5;k++)
        {
            if(brr[j]==arr[k])
            {
            found=1;
            break;
            }
        }
        if(!found)
        {
            urr[urr_index++]=brr[j];
        }
    }
    for(int a=0; a<urr_index;a++)
    {
        printf("%d ",urr[a]);
    }
    return 0;
    
}