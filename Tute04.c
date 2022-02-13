/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int num1, int num2);
int maximum(int num1, int num2);
int multiply(int num1, int num2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//Find maximum between two numbers.
 
int maximum(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

//Find minimum between two numbers.

int minimum(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

//Find multiply in two numbers.

int multiply(int num1, int num2) 
{
    return num1*num2;
}