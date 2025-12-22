#include <stdio.h>

int main()
{

    int a = 10;
    int *ptr;
    int **pptr;
   

    ptr = &a;
    pptr = &ptr;

    printf("A is %d ",a);
    printf("ptr is %d ", *ptr);
    printf("pptr is %d ",**pptr);

        return 0;
}