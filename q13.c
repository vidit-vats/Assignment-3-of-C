#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);

    if (x%6==0)
    printf("Number is div by both 3 and 2\n");

    else
    printf("Not div\n");

    return 0;
}