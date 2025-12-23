#include <stdio.h>
int print();

int print()
{
    int a = 10, b = 20;

    return a + b;
}
int main()
{
    printf("%d", print());
}