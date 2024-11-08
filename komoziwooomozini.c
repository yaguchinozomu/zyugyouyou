#include <stdio.h>

int main(void)
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c",&small);
    diff = 'c'-'C';
    large = small - diff;
    printf("小文字のサイズは%dです。",small);
    printf("大文字は%c   小文字は%c\n",large,small);
   printf("大文字と小文字の差は%dです。\n",diff);
    return 0;
}
