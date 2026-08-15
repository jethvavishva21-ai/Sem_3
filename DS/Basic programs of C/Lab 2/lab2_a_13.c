//WAP to print prime numbers between given interval.

#include<stdio.h>

int main()
{
    int start, end, i, j, isprime;

    printf("Enter Start : ");
    scanf("%d", &start);

    printf("Enter End : ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if(i < 2)
        {
            continue;
        }

        isprime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        
        if(isprime)
        {
            printf("%d\n", i);
        }

    }

    return 0;

}