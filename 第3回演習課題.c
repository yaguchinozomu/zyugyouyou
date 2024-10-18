#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("aの値を打ってください\n");
    scanf("%d",&a);
    printf("bの値を打ってください\n");
    scanf("%d",&b);
    c =a+b;
    printf("a+b=%dです。\n",c);

    return 0;
}
