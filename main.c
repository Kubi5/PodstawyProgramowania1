#include <stdio.h>

int main()
{
 int a,b;
 scanf("%i %i", &a,&b);
 printf("%i", a | b);
 printf("%i", a || b);
 return 0;
 }


 int a,b,c;
 scanf("%i %i %i",&a, &b, &c);
 if (b*b-4*a*c > 0){
 printf("Pierwiastkami równania są liczby: %i i %i",b-sqrt(b*b-4*a*c)/2*a,-b-sqrt(b*b-4*a*c)/2*a);
 }
 return 0;

int tab[3];
tab[0]==1;
tab[1]==2;
tab[2]==3;
printf("%i,%i,%i",tab[0],tab[1],tab[2]);
return 0;
}



{
char* tab[4][20];
char* slowo1;
char* slowo2;
char* slowo3;
char* slowo4;
scanf("%s %s %s %s",&slowo1,&slowo2,&slowo3,&slowo4);
printf("%s, %s, %s, %s",tab[slowo1],tab[slowo2],tab[slowo3],tab[slowo4]);
return 0;
}


{
int a,b,c,d,e,f;
printf("Policzę obwód kwadratu prostokąta i trójkąta\n");
printf("Podaj długość boku kwadratu:");
scanf("%i",&a);
printf("Podaj długości boków trojkata:");
scanf("%i %i %i", &b,&c,&d);
printf("Podaj dlugosc bokow prostokata:");
scanf("%i %i",&e,&f);
printf("Obwód kwadratu wynosi %i, obwód trojkata wynosi %i a obwod prostokata wynosi %i",4*a,b+c+d,2*e+2*f);

return 0;

}
{
int a=3;
printf("Zgadnij liczbę z przedziału od 0 do 10\n");

scanf("%i",&a);

if(a>3 && a<=10){
printf("MNIEJSZA");
}
else if(a>=0 && a<3){
printf("WIEKSZA");
}
else if(a==3){
printf("TAK");
}
else {
printf("Nie rozumiem");
}

return 0;


}


{
char odp, odp2, odp3;

printf("WITAMY W PROGRAMIE MILIONERZY!\n");
printf("PRZED TOBA BEDA 3 PYTANIA W KTORYCH BEDZIESZ MOGL WYGRAC 1K PLN, 40K PLN, 1 MLN PLN!\n");
printf("Przed tobą pierwsze pytanie: Jaka jest najdłuższa rzeka Polski?\n A- ODRA B-WISŁA C-NOTEĆ\n");

scanf("%s",&odp);
if (odp=='b' || odp=='B'){
     printf("BRAWO MASZ 1000 PLN!\n\n");
     printf("KOLEJNE PYTANIE: Z ILOMA PAŃSTWAMI GRANICZY POLSKA?\n A-7 B-5 C-8\n");
     scanf("%s",&odp2);
        if   (odp2=='a' || odp2== 'A'){
        printf("BRAWO MASZ 40 000 PLN!\n");
        printf("PRZED TOBĄ OSTATNIE FINAŁOWE PYTANIE!\n");
        printf("ILE WAŻY WIEŻA EIFFELA?\n A-20 000t B-15 000t c-10000t\n");
        scanf("%s", &odp3);
            if (odp3=='C' || odp3=='c'){
            printf("WYGRAŁEŚ 1 MLN PLN PLN!! GRATULUJEMY!!");
            }
            else
            printf("NIESTETY! ODPADASZ Z KWOTĄ GWARANTOWANĄ 40 000 PLN!");
          }
        else
        printf("NIESTETY! ODPADASZ Z KWOTĄ GWARANTOWANĄ 1000 PLN!");

}
 else
 printf("NIESTETY! ODPADASZ!");



return 0;


}



{
int i;
    scanf("%i",&i);
if (i==1 || i==2)
{
    printf("Słynąl z madrosci");}
else if (i==3){
    printf("Poszedl do lacznosci");
}
else {
    printf("Nie ma takiego syna");
    }



return 0;
}













































