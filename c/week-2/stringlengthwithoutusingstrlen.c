#include <stdio.h>
int main() {
    char s[100];
    int count=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        count++;
    }
printf("Length:%d",count);
    return 0;
}
