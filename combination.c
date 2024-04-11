#include<stdio.h>

int factorial(int a){
    int fac=1;
    for(int i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}

int combination(int n,int r){
    int combi=factorial(n)/(factorial(r)*factorial(n-r));
    return combi;
}

int main(){
    int n=3,r=2;
    int combinatio=combination(n,r);
    printf("%d",combinatio);
    return 0;
}