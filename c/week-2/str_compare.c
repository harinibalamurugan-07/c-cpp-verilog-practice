// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char s2[100];
    char s1[100];
    int f=1;
    printf("Enter the string1:");
    scanf("%[^\n]",s1);
    printf("Enter the string2:");
    scanf(" %[^\n]",s2);
    if(strlen(s1)==strlen(s2)){
    for(int i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
           f=0;
           break;
        }
    }if(f==0){
        printf("Different");
    }else{
        printf("Same");
    }
    }else{
        printf("String not same");
    }
    return 0;
}
