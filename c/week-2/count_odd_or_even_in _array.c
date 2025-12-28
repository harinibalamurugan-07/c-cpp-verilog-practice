// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int main() {
    int n,a[100],e=0,o=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }else{
            o++;
        }
    }
    printf("Even numbers count:%d",e);
    printf("\nOdd numbers count:%d",o);

    return 0;
}
