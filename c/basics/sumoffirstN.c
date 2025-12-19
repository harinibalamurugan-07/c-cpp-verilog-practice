#include<stdio.h>
//using  for-loop
//int main(){
//    int n,sum=0;
//   printf("Enter the number:");
//    scanf("%d",&n); 
//    for(int i=1;i<=n;i++){
//       sum=sum+i;
//   }
//    printf("%d",sum);
//}
//using do-while
int main(){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int i=1;
    do{
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("%d\n",sum); 
}
