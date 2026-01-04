// Online C compiler to run C program online
#include <stdio.h>
void a(int *p,int n){
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}
int main() {
    int arr[100],n;
    printf("Enter the array size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the array elememt %d:",i);
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    a(p,n);
    return 0;
}
