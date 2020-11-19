#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int i;
void okragly(char tab[])
{

    printf("(%s)\n", tab);
}
void kwadrat(char tab[])
{

    printf("[%s]\n", tab);
}
void falowany(char tab[])
{

    printf("{%s}\n", tab);
}
int main()
{

    char tekst[]="Przykładowy tekst";

    void(*t)(char tab[])=okragly;
    t(tekst);
    t=kwadrat;
    t(tekst);
    t=falowany;
    t(tekst);
}

