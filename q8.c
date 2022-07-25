#include <stdio.h>
int main()
{
    short int yr;
    printf("Enter a year: ");
    scanf("%d",&yr);

    if (yr%400==0 && yr%100==0)
        printf("Leap Year\n");
    
    else if (yr%100==0 && (yr%400)!=0)
    printf("Non Leap Year\n");

    else if(yr%4==0)
   printf("Leap Year\n");

    return 0;
}