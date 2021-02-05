#include <stdio.h>
int main()
{
    /*Q4. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
          Mathematics and Computer. Calculate percentage and grade according to following:
          ercentage >= 90% : Grade A
          Percentage >= 80% : Grade B
          Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F
    */

    
    
    float physics, chemistry, maths, biology, computer, percentage;
    

    printf("Enter the marks scored in physics : \n");
    scanf("%f", &physics);

    printf("Enter the marks scored in chemistry :  \n");
    scanf("%f", &chemistry);

    printf("Enter the marks scored in maths : \n");
    scanf("%f", &maths);

    printf("Enter the marks scored in biology : \n");
    scanf("%f", &biology);

    printf("Enter the marks scored in computer : \n");
    scanf("%f", &computer);

    percentage = (physics + chemistry + maths + biology + computer) / 5;
    printf("You have secured %f Percent \n", percentage);

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 50)
    {
        printf("Grade E");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    };

    return 0;
}
