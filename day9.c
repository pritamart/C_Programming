/*
author - Pritam Samui
date - 29/11/2022
WAP to check Leap year in C.
*/ 
#include <stdio.h>
int main()
 {
    int a, b, x, y, t, gcd, lcm;
    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;
    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
    printf("Least common divisor of %d and %d = %d\n", x, y, lcm);
  return 0;
 }
 /*output
 Enter two integers
20 120
Greatest common divisor of 20 and 120 = 20
Least common divisor of 20 and 120 = 120 
*/