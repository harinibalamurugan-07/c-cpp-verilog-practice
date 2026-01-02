// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    int *p=&a;
    printf("value:%d,Address:%p",a,p);

    return 0;
}
