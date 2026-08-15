/*WAP to convert number of days into year, week & days [e.g. 375 days mean 1
year, 1 week and 3 days]*/

#include<stdio.h>

int main()
{
    int totaldays,year,remainigdays,week,day;

    printf("Enter Total days : ");
    scanf("%d",&totaldays);

    year = totaldays / 365;
    remainigdays = totaldays % 365;
    week = remainigdays / 7;
    day = remainigdays % 7;

    printf("%d year, %d week, %d day",year,week,day);

    return 0;
}