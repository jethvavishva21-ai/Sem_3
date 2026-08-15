//WAP to check whether a number is prime or not.

#include<stdio.h>

int main()
{
    int n, i, flag = 1;

    printf("Enter n : ");
    scanf("%d", &n);

    if(n <= 1)
    {
        flag = 0;
    }

    for (i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d is a prime number.", n);
    }

    else
    {
        printf("%d is a not prime number.", n);
    }

    return 0;
    
}