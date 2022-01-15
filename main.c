#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double toplam=0,toplam2=0;

double faktoriyel(int n){
double fakt=1;
while(n>0){
    fakt*=n;
    n--;
}
return fakt;
}



double sinus(float a){
    for( int n=0;n<=20;n++){
         toplam+=((pow(-1,n))*((pow(a,(2*n)+1))/faktoriyel((2*n)+1)));

    }
    return toplam;
}

double cosine(float a){
    for( int n=0;n<=20;n++){
         toplam2+=((pow(-1,n))*((pow(a,(2*n)))/faktoriyel((2*n))));

    }
    return toplam2;
}
int main()
{
    float n,i,fakt=1;
    int sayi;
    printf("Bir Aci Giriniz:");
    scanf("%d",&sayi);
    sayi=sayi%360;
    double radyan=sayi*(M_PI/180);
    printf("sin(%d):%f\t",(int)sayi,sinus(radyan));
    printf("Gercegi:%f\n",(sin(radyan)));

    printf("cos(%d):%f\t",(int)sayi,cosine(radyan));
    printf("Gercegi:%f\n",cos(radyan));



}



