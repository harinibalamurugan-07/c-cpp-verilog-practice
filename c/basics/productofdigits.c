
#include <stdio.h>
int main() {
    int n,p=1;;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0){
        p=0;
    }else{
    while(n!=0){
        p=p*(n%10);
        n=n/10;
        
    }}
printf("product of digits:%d",p);
    return 0;
}
