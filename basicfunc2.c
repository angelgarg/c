#include <stdio.h>

void america()
{
    printf("american\n");
    return;
}

void australia()
{
    printf("australian\n");
    america();
    return;
}

void india()
{
    printf("indian\n");
    australia();
    return;
}

int main()
{
    india();
    return 0;
}