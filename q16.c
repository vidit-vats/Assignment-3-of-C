#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if (ch>=65 && ch<=90)
    printf("UpperCase Letter Entered\n");

    else if(ch>=97 && ch<=122)
    printf("LowerCase Letter Entered\n");

    else if (ch>=48 && ch<=57)
    printf("Number Digit is entered\n");

    else 
    printf("Special Character Entered\n");
    
    return 0;
}