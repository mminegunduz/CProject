#include <stdio.h>
//ekrandan girilen ondal�kl� say�y� bir de�i�kene atay�p saklayan ve g�r�nt�leyen program
int main()
{
	float a;
	printf("Ondalikli Sayiyi Giriniz: ");
	scanf("%f",&a);
	printf("Girilen Sayi: %.2f",a);
	getch();
}
