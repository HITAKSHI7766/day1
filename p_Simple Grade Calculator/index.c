#include<stdio.h>

int main(){

    int marks;
    int grade;

    printf("Enter your score: ");
    scanf("%d", &marks);

    grade = (marks>=90)? 'A':(marks>=80)? 'B':(marks>=70)? 'C':(marks>=60)?'D':'F';

    printf("Your grande is %c ",grade);

    switch (grade){
        case 'A':
        printf("Excellent Work!");
        break;
        case 'B':
        printf("Well Done!");
        break;
        case 'C':
        printf("Good job!");
        break;
        case'D':
        printf("You passed, you could do better!");
        break;
        case 'F':
        printf("sorry, you failed!");
        break;
    }


    return 0;
}