// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int r,cl;
    int a[100][100],b[100][100];
    int T[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&cl);
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            printf("Enter the array element %d%d:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            T[i][j]=a[j][i];
        }
    }
    printf("Transpose matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<cl;j++){
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
