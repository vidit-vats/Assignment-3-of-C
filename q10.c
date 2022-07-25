#include <stdio.h>
int main ()
{
    float cp,sp,p,l,per;
    printf("Enter CP and SP: ");
    scanf("%f%f",&cp,&sp);

    if(cp>sp){
        printf("Loss Occured\n");
        l=cp-sp;
        per=(l/cp)*100;
        printf("Loss Percentage: %.2f%%\n",per);
    }

    else{
        printf("Profit Occured\n");
        p=sp-cp;
        per=(p/cp)*100;
        printf("Profit Percentage: %.2f%%\n",per);
    }

    return 0;

}