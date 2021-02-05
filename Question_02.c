#include <stdio.h>
int main()
{

   
    //Q2. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

    
    
    int a;
    float b;
    printf("ENTER THE TEMPERATURE IN CELCIUS \n");
    scanf("%d", &a);

    b = (a * 9 / 5) + 32;

    printf("TEMPERATURE IN FAHRENHEIT IS %f \n", b);

    return 0;
}
