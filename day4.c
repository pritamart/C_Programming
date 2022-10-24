/*
author - Pritam Samui
date - 24/11/2022
WAP to find maximum of two number.
*/  
#include <stdio.h>
void main(){
    printf("Enter 3 number\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("max =\t");
    if(a >= b && a >= c){
        printf("%d",a);
    }
    else if(b > a && b >=c){
        printf("%d",b);
    }
    else
        printf("%d",c);
}
/*Output
Enter 3 number
56 86 64
max =   86*/