#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, Large;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);
    big =  a>b ?(a>c ? a : c):(b>c ? b : c);
    printf("the biggest number is : %d", Large);
    return 0;
}
