// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int r,cl;
    int a[100][100],b[100][100];
    int c[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&cl);
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            printf("Enter the array1 element %d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            printf("Enter the array2 element %d%d:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
