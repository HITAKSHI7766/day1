#include<stdio.h>


int main(){

    int n;
    int i = 1;
   

    printf("Enter any number: ");
    scanf("%d", &n);

    while(n >= i){
        if (n % 2  != 0){ // !=(odd method), ==(Even method)
            printf("%d ", n);
        }
        n--;
    }



    return 0;
}