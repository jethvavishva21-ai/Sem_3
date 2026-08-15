//WAP to print Armstrong number from 1 to 1000.

#include<stdio.h>

int main()
{
    int n, i, temp, digit, sum;

    for (i = 1; i <= 1000; i++)
    {
        n = i;
        temp = n;
        sum = 0;

        while (n != 0)
        {
            digit = n % 10;
            sum = sum + (digit * digit * digit);
            n = n / 10;
        }

        if(temp == sum)
        {
            printf("%d\n", temp);
        }

    }

    return 0;
}