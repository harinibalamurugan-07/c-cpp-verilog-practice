// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char s2[100];
    char s1[100];
    int f=1;
    printf("Enter the string1:");
    scanf("%[^\n]",s1);
    int len=strlen(s1);
    for(int i=0;i<=len-1;i++){
        s2[i]=s1[len-i-1];
        printf("%c",s2[i]);
    }
    s2[len] = '\0'; 
    for(int j=0;s1[j]!='\0'&&s2[j]!='\0';j++){
        if(s1[j]!=s2[j]){
            f=0;
            break;
        }
    }if(f==1){
        printf("\nPalindrome");
    }else{
        printf("\nNOT Palindrome");
    }
   
    return 0;
}
