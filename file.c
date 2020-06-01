#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, bd, c, Large;
    printf("Enter the 3 numbers:");
    scanf("%d %d %d", &a, &bd, &c);
    big =  a>bd ?(a>c ? a : c):(bd>c ? bd : c);
    printf("the biggest number is : %d", Large);
    return 0;
}
