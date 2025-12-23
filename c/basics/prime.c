// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,a,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("Not prime");
       
    }else if(n==2){
        printf("Only even prime");
        
    }else{
        for(int i=2;i<=n-1;i++){
           if(n%i==0){
           count++;
           }
        }
        printf("%d",count);
        if(count==0){
            printf("\nprime");
        }else{
            printf("\nNot Prime");
        }
    }
    
    return 0;
}
