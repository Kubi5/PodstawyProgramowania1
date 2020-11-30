#include <stdio.h>
#include <stdlib.h>

// basdhewkx23812
//basdhewky23812


int main()
{

FILE *wsk;
FILE *wsk2;
char tab[100];

wsk=fopen("plik.txt","r");
wsk2=fopen("plik2.txt","a+");
fscanf(wsk,"%s",tab);
//fscanf(wsk,zaw_pliku);
//fprintf(wsk2,"%s",zaw_pliku);
printf("%s",tab);
fprintf(wsk2,"%s",tab);


fclose(wsk);
fclose(wsk2);
return 0;

}
