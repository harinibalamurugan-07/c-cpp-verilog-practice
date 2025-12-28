// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    printf("Reversed array:");
    for(int i=n-1;i>=0;i--){
        
        printf("%d ",a[i]);
    }

    return 0;
}
