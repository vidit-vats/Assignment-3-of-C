#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no:");
    scanf("%d",&no);

    if (no>0)
    printf("+ve Number entered\n");

    else if (no<0)
    printf("Non +ve Number entered\n");

    else if (no==0)
    printf("Neither Positive nor Negative\n");

    return 0;
}