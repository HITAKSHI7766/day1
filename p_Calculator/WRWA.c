#include<stdio.h>


int cube(int a);
int sum(int b);

int cube(int a){
    return a*a*a;
}
int sum(int b)
{
    return b+b+b;
}
int main(){
    printf("%d",cube(3));
    printf("%d",sum(5));
}