//WAP to determine whether the entered character is vowel or not.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter Character : ");
    scanf("%s",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("charcater is Vovel");
    }

    else
    {
        printf("character is Constant");
    }

    return 0;

}