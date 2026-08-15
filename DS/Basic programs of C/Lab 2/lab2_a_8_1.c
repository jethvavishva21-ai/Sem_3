//WAP to find factorial of a number. (Using loop)

#include<stdio.h>

int main()
{
    int n, fact = 1,i;

    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("factorial = %d", fact);

    return 0;
    
}