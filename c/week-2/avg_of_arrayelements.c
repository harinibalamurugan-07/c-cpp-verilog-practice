// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int n;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       printf("Enter %d element:",i);
      scanf("%d",&arr[i]); 
    }
    int sum=0;
    float a;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    a=(float)sum/n;
    printf("Average of array element:%.2f",a);
    return 0;
}
