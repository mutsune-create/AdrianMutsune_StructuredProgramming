#include <stdio.h>

int main()
{
    float radius;
    float area;
    const float pi = 3.142;
    // Asks the user to enter the radius
    printf("Enter the radius:  ");
    scanf("%f",&radius);
    // Calculates the surface area using the entered pi
    area = 4*pi*radius*radius;
    // prints the area as output
    printf("the surface area is: %f",area);
}
