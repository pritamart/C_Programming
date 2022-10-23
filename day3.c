/*
author - Pritam Samui
date - 23/11/2022
WAP to swap two number using variables.
*/  
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enther tow number\t");
    scanf("%d%d",&a,&b);
    printf("The valus of before swap a = %d \t b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("The valus of after swap a = %d \t b = %d\n",a,b);
    return 0;
}
/*Output
Enther tow number       5 7
The valus of before swap a = 5   b = 7
The valus of after swap a = 7    b = 5
*/
