#include <stdio.h>
int main()
{

    
    //Q1.Write a C program to enter two numbers and perform all arithmetic operations.

    
    
    int a, b, sum, sub, mult;
    float div;

    printf("ENTER ANY TWO NUMBER : \n");
    scanf("%d%d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("SUM = %d\n", sum);
    printf("SUBSTRACTION = %d\n", sub);
    printf("MULTIPLICATION = %d\n", mult);
    printf("DIVISION = %f\n", div);

    return 0;
}