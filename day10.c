 //author - Pritam Samui
 //date - 30/11/2022
 //WAP factorial of given number
 #include <stdio.h>
 long factorial(int n){
    if(n == 0)
        return 1;
    else
        return (n * factorial(n-1));
 }
 int main()
  {
     int n;
     long f;
     printf("Enter an integer to find its factorial\n");
     scanf("%d",&n);
     if(n < 0)
        printf("Factorial of negative integer isn't defined.\n");
    else
    {
        f = factorial(n);
        printf("%d! = %ld\n", n, f);
    }
   return 0;
  }