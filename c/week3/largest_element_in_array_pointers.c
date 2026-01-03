// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int arr[100],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the array element %d:",i);
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int max=*(p+0);
    for(int i=0;i<n;i++){
        if(max<*(p+i))
        {
            max=*(p+i);
        }
       
    }
 printf("%d",max);
    return 0;
}
