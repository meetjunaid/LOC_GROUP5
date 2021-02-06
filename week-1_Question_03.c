#include <stdio.h>
int main()
{

    
    //Q3. Write a C program to enter the radius of a circle and find its diameter, circumference and area.

    
    
    int radius, diameter;
    float circumference, area;

    printf("ENTER THE THE RADIUS OF THE CIRCLE : \n");
    scanf("%d", &radius);

    diameter = 2 * radius;
    circumference = 2 * 22 / 7 * radius;
    area = 22 / 7 * radius * radius;

    printf("It's Diameter is %d\n", diameter);
    printf("It's Circumference is %f \n", circumference);
    printf("It's Area is %f/n", area);

    return 0;
}
