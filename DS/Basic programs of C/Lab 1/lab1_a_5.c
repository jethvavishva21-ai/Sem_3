//WAP to check for the leap year.

#include<stdio.h>

int main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is leap year",year);
    }

    else
    {
        printf("%d is leap not year",year);
    }

    return 0;
    
}