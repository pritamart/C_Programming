 /*
author - Pritam Samui
date - 21/11/2022
Question - An electric power distribution company charges it's domestic consumers as follows:-
consumption units           Rate of charge
0-200                       Rs. 5 per unit
201-400                     Rs. 100 + 7 per unit
401-600                     Rs. 200 + 8 per unit
600 and above               Rs. 300 + 9 per unit
Write a C program which reads the units and print the charges */

#include <stdio.h>
#include <conio.h>
void main(){
    int units;
    printf("Enther the auntis consumed :\t");
    scanf("%d",&units);
    if(units > 0){
        if(units <= 200){
            printf("Rs. 5 per unit.");
        }
        else if(units > 200 && units <= 400){
            printf("Rs. 100 + 7 per unit.");
        }
        else if(units > 400 && units <= 600){
            printf("Rs. 200 + 8 per unit.");
        }
        else{
            printf("Rs. 300 + 9 per unit.");
        }
    }
    else{
        printf("Please enter positive number.");
    }
getch();
}
