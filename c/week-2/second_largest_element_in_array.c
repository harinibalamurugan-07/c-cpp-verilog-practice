// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int main() {
    int n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&a[i]);
    }
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(first<a[i]){
            second=first;
            first=a[i];
        }else if(a[i]<first&&a[i]>second){
            second=a[i];
        }
    }
    printf("Second largest number:%d",second);

    return 0;
}
