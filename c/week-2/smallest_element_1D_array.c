// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int n;
    int a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       printf("Enter %d element:",i);
      scanf("%d",&a[i]); 
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<max){
            max=a[i];
        }
    }
    printf("Smallest element:%d",max);
    return 0;
}
