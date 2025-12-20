// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,q;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        q=n%10;
        printf("%d",q);
        n=n/10;
    }

    return 0;
}
