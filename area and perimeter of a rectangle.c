#include<stdio.h>
#include<stdlib.h>

int main()

{
    float l,b;

    printf("Length of the rectangle: ");
    scanf("%g",&l );
    printf("Breadth of the rectangle: ");
    scanf("%g", &b);

    float area, perimeter;

    area = l * b;
    perimeter = 2*(l+b);

    printf("The perimeter of the given rectangle is %g\n", perimeter);
    printf("The area of the given rectangle is %g\n", area);

    return 0;

}
