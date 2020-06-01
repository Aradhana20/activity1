#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, big;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);
    big =  a>b ?(a>c ? a : c):(b>c ? b : c);
    printf("the biggest number is : %d", big);
    return 0;
}
