#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("aの値を打ってください\n");
    scanf("%d",&a);
    printf("bの値を打ってください\n");
    scanf("%d",&b);
   if(a%2==0 && b%2==0)
   {
       printf("aとbはどちらも偶数です。");
   }
   else if(a%2==1 && b%2==1)
   {
       printf("aとbはどちらも奇数です。");
   }
   else
   {
       printf("aとbは片方が奇数で片方が偶数です。");
   }

    return 0;
}