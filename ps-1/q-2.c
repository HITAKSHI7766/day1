#include<stdio.h>

int main(){

    float base;
    float hra;
    float da;
    float ta;

    printf("Base salary: ");
    scanf("%f", &base);


    printf("HRA:");
    scanf("%f", &hra);

    printf("DA:");
    scanf("%f", &da);

        printf("TA:");
    scanf("%f", &ta);


    float grosssalary = base+(base*hra/100)+(base *da/100)+(base *ta/100);

    printf("gross salary:%f",grosssalary);








    return 0;
}