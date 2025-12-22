#include <stdio.h>

int main()
{
    int a;
    printf("Enter value of A: ");
    scanf("%d", &a);
    int *ptr;

    ptr = &a;
    printf("%d", ptr);
    //  printf("%d", *ptr);

    return 0;
}