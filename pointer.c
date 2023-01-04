// author - Pritam Samui
// date - 04/01/2023
#include <stdio.h>
int main()
{
    int a;
    int *p;
    a = 5;
    p = &a;
    printf("%d\n", *p); // value of p
    printf("%d\n", &p); // address of p
    printf("%d\n", &a); // address of a
    printf("%d", a);    // valu of a
}