#include <stdio.h>

int main()
{
//kullanýcýdan doðum tarihini alýp yaþýný giren kod
	int dtarih,yas;
	printf("Dogum Tarihinizi Giriniz: ");
	scanf("%d",&dtarih);
	yas=2023-dtarih;
	printf("Yasiniz: %d",yas);
	return 0;
}
