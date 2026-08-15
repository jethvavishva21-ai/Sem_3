//WAP to find factorial of a number. (recursion)

#include<stdio.h>

int fact(int n);

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));

    return 0;

}

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }

    else
    {
        return n * (fact(n - 1));
    }
}