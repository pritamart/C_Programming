/*
author - Pritam Samui
date - 28/11/2022
WAP to check Leap year in C.
*/ 

#include <stdio.h>
int main()
 {
    int year;
    printf("Enter a year to check if it's a leap year\n");
    scanf("%d",&year);
    if(year % 400 == 0)
        printf("%d is a leap year.\n",year);
    else if(year % 100 == 0)
        printf("%d is not a leap year.\n",year);
    else if(year % 4 == 0)
        printf("%d is a leap year.\n",year);
    else
        printf("%d isn't a leap year.\n",year);
  return 0;
 }