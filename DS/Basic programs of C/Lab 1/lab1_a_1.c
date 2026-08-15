//WAP to calculate area of a Circle (A = πr2).

#include<stdio.h>

int main()
{
    float r,area;

    printf("Enter Radius : ");
    scanf("%f",&r);

    area = 3.14 * r * r;

    printf("Area of Circle = %f",area);

    return 0;
}