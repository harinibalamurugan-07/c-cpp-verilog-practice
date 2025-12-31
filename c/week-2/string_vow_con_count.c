#include <stdio.h>
#include<ctype.h>
int main() {
    char s[100];
    int count=0,c=0;;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(isalpha(s[i])){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }else{
            c++;
        }
        }
    }
    printf("vowels:%d,consonants: %d",count,c);
    return 0;
}
