#include <stdio.h>

int main()
{
//kullan�c�dan do�um tarihini al�p ya��n� giren kod
	int dtarih,yas;
	printf("Dogum Tarihinizi Giriniz: ");
	scanf("%d",&dtarih);
	yas=2023-dtarih;
	printf("Yasiniz: %d",yas);
	return 0;
}
