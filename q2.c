#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no: ");
    scanf("%d",&no);

    if (no%5==0)
    printf("Number is divisible by 5\n");

    else 
    printf("Number is not divisible by 5\n");

    return 0;
}