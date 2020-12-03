#include <stdio.h>
#include <time.h>

int iloczyn(int*wsk,int*wsk2){
time_t start,koniec;
double roznica;
time(&start);
sleep(3);
time(&koniec);
roznica=difftime(koniec,start);
printf("Czas wykonania funkcji: %.2f\n",roznica);
return (*wsk)*(*wsk2);
}
int main(){
int a=10;
int b=5;

int *wsk=&a;
int *wsk2=&b;

iloczyn(wsk,wsk2);
}
