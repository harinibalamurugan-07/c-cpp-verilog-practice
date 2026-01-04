// Online C compiler to run C program online
#include <stdio.h>
int a(int *p){
    int *b=p;
    printf("%d\n",*b+10);
    *p=*b+10;
    return *p;
}
int main() {
    int n;
    printf("Enter the element:");
    scanf("%d",&n);
    int *p=&n;
    printf("%p\n",p);
    printf("%d\n",a(p));
    return 0;
}
