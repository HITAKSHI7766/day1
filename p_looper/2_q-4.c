#include<stdio.h>



int main(){
   
    int i,n;
    int first=0;
    int second=1;
    int ans=first+second;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("fibonacci series: %d %d ",first,second);

    for(i=2;i<=n;i++){
        printf("%d ", ans);
        first=second;
        second=ans;
        ans=first+second;
    }


    return 0;
}