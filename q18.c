#include <stdio.h>
int main()
{
    int x;
    printf("Enter a month no from 1 to 12: ");
    scanf("%d",&x);

    if (x==1 || x==3 || x==5 || x==7 || x==8 ||x==10 || x==12)
    printf("31 Days\n");

    else if (x==2)
    printf("28 Days in NLY and 29 Days in LY\n");

    else
    printf("30 Days\n");
    
    return 0;
}