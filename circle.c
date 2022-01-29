#include<stdio.h>
#include<stdlib.h>

int main()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%g", &r);

    float area, perimeter;

    area = 22 * r * r / 7;
    perimeter = 2 * 22 * r / 7;

    printf("PERIMETER = %g\n", perimeter);
    printf("AREA = %g\n", area);

    return 0;

}
