
#include <stdio.h>

int main() {
    int n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i++;
        n=n/10;
    }
printf("No of digits:%d",i);
    return 0;
}
