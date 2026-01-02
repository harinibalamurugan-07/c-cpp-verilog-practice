// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,temp;
    printf("Enter the values:");
    scanf("%d %d",&a,&b);
    int *p=&a;
    int *q=&b;
    
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d b=%d",*p,*q);
    printf("\n");
    printf("a=%d b=%d",a,b);

    return 0;
}
