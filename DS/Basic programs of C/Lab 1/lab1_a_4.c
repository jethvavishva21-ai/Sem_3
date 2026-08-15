//WAP to find the largest among the given three numbers by user.

#include<stdio.h>

int main()
{
    int a,b,c,ans;

    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Enter c : ");
    scanf("%d",&c);

    if(a > b && a > c)
    {
        printf("a is large numbar");
    }

    else if(b > a && b > c)
    {
        printf("b is large numbar");
    }

    else 
    {
        printf("c is large number");
    }

    return 0;
    
}