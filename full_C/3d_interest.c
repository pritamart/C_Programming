#include<stdio.h>
int main(){
    float p,r,t,a=0;
    printf("Enter thr Principal (Initial Valu) \t");
    scanf("%f",&p);
    printf("Enter the Interest Rate \t");
    scanf("%f",&r);
    printf("Enter the time(year)\t");
    scanf("%f",&t);
    float b = (p*r*t)/100;
    a = p+b; 
    printf("\nFuture Value is  %.2f \n\n",a);
    return 0;
}