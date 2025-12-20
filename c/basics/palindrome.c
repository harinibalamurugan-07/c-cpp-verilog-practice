// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,q,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int o=n;
    while(n!=0){
        q=n%10;
        printf("%d",q);
        rev=rev*10+q;
        n=n/10;
        
    }
    if(o==rev){
        printf("\nPalindrome");
    }else{
         printf("\nNot Palindrome");
    }
    return 0;
}
