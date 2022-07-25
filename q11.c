#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,tm;
    printf("Enter marks of 5 subjects out of 100 in each subject: ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

   if (s1==33 && s2==33 && s3==33 && s4==33 && s5==33)
    printf("Passed on Margin\n");

    if (s1>=33)
    printf("Passed in S1\n");

    else
    printf("Fail in S1\n");

    if (s2>=33)
    printf("Passed in S2\n");

    else
    printf("Fail in S2\n");

    if (s3>=33)
    printf("Passed in S3\n");

    else
    printf("Fail in S3\n");

    if (s4>=33)
    printf("Passed in S4\n");

    else
    printf("Fail in S4\n");

    if (s5>=33)
    printf("Passed in S5\n");

    else
    printf("Fail in S2\n"); 

tm=s1+s2+s3+s4+s5;
printf("Total Marks out of 500: %f\n",tm);
    return 0;

}