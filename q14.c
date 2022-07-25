// this ques is not completed.. to be done later
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);

    if (x%21==0)
    printf("Number is div by both 3 and 7\n");

    else if (x%7==0 && x%3!=0)
    printf("Div by 7 but not by 3\n");

    else
    printf("Neither by 7 nor by 3\n");
    
    return 0;
}