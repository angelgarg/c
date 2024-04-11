#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter a:\n");
    scanf("%d",&a);

    printf("Enter b:\n");
    scanf("%d",&b);

    int c=sum(a,b);
    printf("sum is %d",c);

    return 0;
}