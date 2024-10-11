#include <stdio.h>
//Munevver Mine Gunduz, Bilgisayar Muhendisligi 1.sinif 1.Ogretim  no:1220606027
int main(void) {
 int sayi,i=0,ters;

   printf("LUTFEN BIR SAYI GIRINIZ\n");
   scanf("%d",&sayi);

   ters = sayi;

   while(ters!=0)
   {
      i=i*10;
      i=i+ters%10;
      ters=ters/10;
   }

   if(sayi==i)
      printf("%d PALINDROM BIR SAYIDIR\n",sayi);
   else
      printf("%d PALINDROM BIR SAYI DEGILDIR\n",sayi);

  return 0;
}
