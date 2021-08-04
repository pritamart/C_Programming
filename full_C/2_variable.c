#include<stdio.h>
int main(){ //main function 
    int a = 1; //interger value of 1 is store in a location
    float b = 3.3; //real value
    char d = 'A\0'; //string value
    char str[30] = "Pritam"; //print a character
    printf("value of a is %d\n",a);
    printf("value of b is %f\n",b);
    printf("character of d is %c\n",d);
    printf("%s",str);
    return 0;
}