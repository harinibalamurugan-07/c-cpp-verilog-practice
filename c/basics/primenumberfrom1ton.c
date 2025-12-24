// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        int count=0;
        if(i==0||i==1){
            printf("");
        }else if(i==2){
            printf("\n%d only even prime number",i);
        }else{
            for (int j=2;j<=i-1;j++){
            
                if(i%j==0){
                    count++;
                    break;
                }
                }if(count==0){
                    printf("\n%d is prime number",i);
                    
                }
        }
    }

    return 0;
}
