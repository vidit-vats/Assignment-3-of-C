#include <stdio.h>
int main (int argc, char *argv[]) {
    
    int x,count=0,dig;
    printf("Enter a no: ");
    scanf("%d",&x);

    while(x!=0)
    {
        dig=x%10;
        x=x/10;
        ++count; 
    }

    if (count==3)
    printf("3 digit no entered\n");

    else 
    printf("Not a 3-digit no entered\n");

    return 0;
}