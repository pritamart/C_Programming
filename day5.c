/*
author - Pritam Samui
date - 25/11/2022
WAP to Find Area of a Right Angled Triangle.
*/ 
 #include <stdio.h>
 int main()
  {
    float a, b, area;
    printf("Enter height and width of the given triangle: ");
    scanf("%f %f", &a, &b);
    area = 0.5 * a * b;
    printf("Area = %.2f",area);
   return 0;
  }
/*output 
Enter height and width of the given triangle: 20 5
Area = 50.00
*/
