#include <stdio.h>
int fact(int n){
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    return p;
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n),
    printf("%d",fact(n));
    return 0;
}
