#include <stdio.h>

int main()
{
    int Maezawa,Hikakin,Seikin;
    
    Maezawa = 100;
    Hikakin = 50;
    Seikin = 20;
    if(Maezawa == 100)
    printf("前澤さんの年収は100億円です\n");
    if(Hikakin!= 100)
    printf("Hikakinの年収は100億円ではありません\n");
    if(Hikakin>=20)
    printf("Hikakinの年収は20億円以上です\n");
    if(Seikin<50)
    printf("Seikinの年収は50億円以下です\n");
    if(Maezawa>Hikakin)
    printf("前澤さんはHikakinよりも稼いでいます\n");
    if(Hikakin>Seikin)
    printf("HikakinはSeikinよりも稼いでいます\n");

    return 0;
}
