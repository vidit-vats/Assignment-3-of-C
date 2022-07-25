#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);

    if(x>0)
    printf("Positive No\n");

    else if (x<0)
    printf("Negative No\n");

    else if(x==0)
    printf("Zero Entered\n");

    return 0;
}