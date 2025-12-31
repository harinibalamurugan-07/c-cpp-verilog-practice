// Online C compiler to run C program online
#include <stdio.h>
int main() {
    char s[100];
    int count=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
    printf("%d\n",count);
    for(int j=count-1;j>=0;j--){
        printf("%c",s[j]);
    }

    return 0;
}
