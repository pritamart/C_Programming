/*
author - Pritam Samui
date - 26/11/2022
WAP to student result as follow.
Marks           gated
80 >=           A
60 >=           B
40 >=           C
40 <            D
*/ 
#include <stdio.h>
int main()
 {
    int n;
    printf("Enter the marks out of 100 :-");
    scanf("%d",&n);
    printf("your grade is :- ");
    if(n <= 100 && n > 0){
        if(n >= 80)
            printf("A");
        
        else if(n >= 60)
            printf("B");
        
        else if(n >= 40)
            printf("C");

        else
            printf("D");

    }
    else 
        printf("Please enter marks (between 0 to 100) ");
  return 0;
 }
