/*
author - Pritam Samui
date - 27/11/2022
WAP to check odd even.
*/ 
#include <stdio.h>
int main()
{
  int n;

  printf("Enter an integer\n");
  scanf("%d", &n);

  if (n%2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");

  return 0;
}
/*output
Enter an integer
5
Odd
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day7.c -o day7 } ; if ($?) { .\day7 }
Enter an integer
10
Even
*/