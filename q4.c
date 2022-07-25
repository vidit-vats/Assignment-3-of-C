#include <stdio.h>
int main()
{
    int x,mask=1;
    printf("Enter a no: ");
    scanf("%d",&x);

    if (x&mask==1)
    printf("Odd No\n");

    else 
    printf("Even No\n");
    
    return 0;
}

