#include <stdio.h>
//ekrandan girilen ondalýklý sayýyý bir deðiþkene atayýp saklayan ve görüntüleyen program
int main()
{
	float a;
	printf("Ondalikli Sayiyi Giriniz: ");
	scanf("%f",&a);
	printf("Girilen Sayi: %.2f",a);
	getch();
}
