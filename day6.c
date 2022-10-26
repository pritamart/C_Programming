/*
author - Pritam Samui
date - 26/11/2022
WAP to student result as follow.
Marks           gated
80 >=           A
60 >=           B
50 >=           C
40 <           D
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
        
        else if(n >= 50)
            printf("C");

        else
            printf("D");

    }
    else 
        printf("Please enter marks (between 0 to 100) ");
  return 0;
 }
/*output
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day6.c -o day6 } ; if ($?) { .\day6 }
Enter the marks out of 100 :-1023
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day6.c -o day6 } ; if ($?) { .\day6 }
Enter the marks out of 100 :-89
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day6.c -o day6 } ; if ($?) { .\day6 }
Enter the marks out of 100 :-70
your grade is :- B
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day6.c -o day6 } ; if ($?) { .\day6 }
Enter the marks out of 100 :-56
your grade is :- C
PS D:\education\c> cd "d:\education\c\" ; if ($?) { gcc day6.c -o day6 } ; if ($?) { .\day6 }
Enter the marks out of 100 :-45
your grade is :- D
*/