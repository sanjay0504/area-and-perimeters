#include<stdio.h>
#include<stdlib.h>

int main()

{
    float a,b,c;
    printf("Enter side a: ");
    scanf("%g", &a);
    printf("Enter side b: ");
    scanf("%g", &b);
    printf("Enter side c: ");
    scanf("%g", &c);

    float perimeter , area;

    perimeter = a + b + c;

    float s;
    s = perimeter / 2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("PERIMETER = %g\n", perimeter);
    printf("AREA = %g\n", area);

    return 0;


}
