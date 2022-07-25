#include <stdio.h>
int main()
{
    int a,b,c,dis;
    printf("Enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    dis=(b*b)-4*a*c;

    if(dis==0)
    printf("Roots are Real and Equal\n");

    else if (dis>0)
    printf("Roots are Real and Unequal\n");

    else if (dis<0)
    printf("Roots are Imaginary\n");
}