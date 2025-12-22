#include<stdio.h>


int main(){

    int i;
    int n=1;

    printf("Enter your number: ");
    scanf("%d", &i);

    while ( i >= n){

        printf("%d ", i);
        i--;
    }



    return 0;
}