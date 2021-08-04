#include<stdio.h>
int main()
{
    printf("Enter the number (1st)\t");
    int a,b,sum;
    scanf("%d",&a); // user input
    printf("\nEnter the 2nd number\t");
    scanf("%d",&b);
    sum = a+b; //sum of tow number
    printf("\nsum = %d",sum);
    return 0;
}
