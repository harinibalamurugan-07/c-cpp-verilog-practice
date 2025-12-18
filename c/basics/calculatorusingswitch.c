
#include <stdio.h>

int main() {
   int a,b;
   char op;
   printf("Enter the num1and num2:");
   scanf("%d %d",&a,&b);
   printf("Enter the operand");
   scanf(" %c",&op);
   switch(op){
       case '+':
            printf("%d",a+b);
            break;
       case '-':
            printf("%d",a-b);
            break;
       case '*':
            printf("%d",a*b);
            break;
       case '/':
            if(b==0){
                printf("Denominatot is zero,division cannot be performed");
            }
            else{
            printf("%d",a/b);
            }
            break;
       default:
            printf("Invalid");
   }
   
}
