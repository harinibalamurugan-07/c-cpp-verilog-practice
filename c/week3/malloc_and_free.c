// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("No memory allocated");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("Enter the array element %d",i+1);
        scanf("%d",&*(arr+i));
    }for(int i=0;i<n;i++){
        printf("%d",*(arr+i));
    }
free(arr);
    return 0;
}
