// Calculate the area and volum of rectangle
#include<stdio.h>
int main(){
    int r,h;
    float a = 3.14159; // value of 𝝅
    printf("Enter the radius of cylinder\t");
     scanf("%d",&r);
    printf("Enter the height of cylinder\t");
    scanf("%d",&h);
    float area = a*r*r;
    float v = a*r*r*h; 
    printf("\nArea is %f and volume if %f",area,v);
    return 0;
}