#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no: ");
    scanf("%d",&no);

    if (no%2==0)
    printf("Even Number\n");

    else
    printf("Odd Number\n");

    return 0;
}