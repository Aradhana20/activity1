#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, cd, big;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d", &a, &b, &cd);
    big =  a>b ?(a>cd ? a : cd):(b>cd ? b : cd);
    printf("the biggest number is : %d", big);
    return 0;
}
