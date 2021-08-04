#include<stdio.h>
int main(){
    float a;
    printf("Enter the temperature (C)\t");
    scanf("%f",&a);
    float f = (a*9/5)+32;
    printf("%.2f(F)",f);
    return 0;
}