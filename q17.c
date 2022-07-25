#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b)
    printf("Triangle Valid\n");

    else 
    printf("Triangle not Valid\n");
    
    return 0;
}