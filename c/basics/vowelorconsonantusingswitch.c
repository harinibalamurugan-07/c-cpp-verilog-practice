
#include <stdio.h>

int main() {
   char op;
   printf("Enter the operand:");
   scanf("%c",&op);
   switch(op)
{
    case 'a':
    case 'A':
    case 'i':
    case 'I':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Consonant");
}

   
}
