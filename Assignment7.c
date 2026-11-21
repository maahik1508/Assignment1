#include <stdio.h>
int main()
{
    int a, b;
    int temp;
    int *p = &a;
    int *q = &b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;

}