#include <stdio.h>
int main()
{

    float radius;
    printf("\nEnter radius of circle: "); // π(pi)=3.14 formula for area= pi*radius*radius
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    float circumstance = 2 * 3.14 * radius;

    printf("Area of circle is %.3f\n", area);
    printf("Circumstance of circle is %.3f\n", circumstance);

    //_____ TRIANGLE _____
    float base, height, area2;
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area2 = (base * height) / 2;

    printf("Area of triangle is %.3f\n", area2);

    // _____ RECTANGLE _____
    // 2*(l+b)
    float lenght, breath, perimeter;

    printf("Enter lenght and breath: ");
    scanf("%f %f", &lenght, &breath);

    perimeter = 2 * (lenght + breath);

    printf("Perimeter of rectangle is %.3f", perimeter);

    return 0;
}