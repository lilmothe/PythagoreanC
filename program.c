#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hypSide[10];
    double sideA;
    double sideB;
    double hyp = 0.0;

    printf("Would you like to find out the value of the Hypotenuse or A Side?\n\n(Type Hypotenuse or Side):\n");
    scanf("%s", hypSide);

    if (strcmp(hypSide, "Hypotenuse") == 0)
    {
        printf("You chose to find the Hypotenuse\n Please input Side A\n");
        scanf("%lf", &sideA);
        //takes an input for sideA;
        printf("Now input Side B\n");
        scanf("%lf", &sideB);
        //takes an input for sideB
        printf("The Hypotenuse is : ");

        double squareRoot = sideA * sideA + sideB * sideB;
        //this sets the value of squareRoot to sideA^2 + sideB^2
        printf("%lf", sqrt(squareRoot));
        return 0;
    }

    if (strcmp(hypSide, "Side") == 0)
    {
        printf("You chose to figure out a side. (that isn't the hypotenuse) \n Please input the Hypotenuse \n");
        scanf("%lf", &sideA);
        //takes an input for sideA;
        printf("Now input Side B (The Smaller one.)\n");
        scanf("%lf", &sideB);
        //takes an input for sideB
        printf("The side is; ");

        double squareRoot = sideA * sideA - sideB * sideB;
        //this sets the value of squareRoot to sideA^2 - sideB^2
        printf("%lf", sqrt(squareRoot));

        return 0;
    }

}