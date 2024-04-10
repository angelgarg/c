#include <stdio.h>

int main()
{
    void india();
    india();
    return 0;
}
void india()
{
    printf("indian\n");
    void australia();
    australia();
    return;
}

void australia()
{
    printf("australian\n");
    void america();
    america();
    return;
}
void america()
{
    printf("american\n");
    return;
}
