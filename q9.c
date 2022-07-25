#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three nos: ");
    scanf("%d%d%d",&a,&b,&c);

    if ((a>b) && (a>c))
    printf("%d is greatest of all\n",a);

    else if ((b>a)&& (b>c))
    printf("%d is greatest of all\n",b);

    else if ((c>a) && (c>b))
    printf("%d is greatest of all\n",c);

    else if (a==b && a==c)
    printf("None is greater\n");

    else if ((a>b) && (b==c))
    printf("%d is greatest of all\n",a);

    else if ((b>c) && (c==a))
    printf("%d is greatest of all\n",b);

    else if ((c>a) && (a==b))
    printf("%d is greatest of all\n",c);

    else if ((b>a) && (a==c))
    printf("%d is greatest of all\n",b);

    else if ((c>b) && (b==a))
    printf("%d is greatest of all\n",b);

    else if ((a>c) && (c==b))
    printf("%d is greatest of all\n",c);

    return 0;
}