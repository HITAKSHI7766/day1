#include<stdio.h>


int main(){
    int start,end;

    printf("Enter a strating year: ");
    scanf("%d", &start);


    printf("Enter a ending year: ");
    scanf("%d", &end);


    while(start<=end){
        if((start%4==0 && start%100!=0) ||(start%400==0)){
            printf("%d ",start);
        }
        start++;

    }



        return 0;
}