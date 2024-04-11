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
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
           int combi=combination(i,j);
           printf("%d ",combi);
        }
        printf("\n");
    }
    return 0;
}