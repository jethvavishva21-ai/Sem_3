//WAP to find power of a number using loop.

#include<stdio.h>

int main()
{
    int x, y, i, j, result = 1;

    printf("Enter x : ");
    scanf("%d", &x);

    printf("Enter y : ");
    scanf("%d", &y);

    for (i = 1; i <= y; i++)
    {
        int temp = 0;

        for (j = 1; j <= x; j++)
        {
            temp = temp + result;
        }

        result = temp;
    }

    printf("%d ^ %d = %d", x, y, result);

    return 0;

}