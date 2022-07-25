#include <stdio.h>
int main()
{
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);

    if (c>=65 && c<=90)
    printf("UpperCase Letter\n");

    else if (c>=97 && c<=122)
    printf("LowerCase Letter\n");

    return 0;
}