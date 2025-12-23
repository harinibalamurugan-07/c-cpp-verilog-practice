// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,p=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
          p=p*i;
    }
    printf("Factorial:%d",p);
    return 0;
}
