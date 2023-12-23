#include <stdio.h>
//Metin Belgesini Okuma
int main(void) {
FILE *belge;
char karakter;
belge=fopen("C:\\Users\\DELL\\Desktop\\yeni.txt","r");

do     //do-while kullanmamýzýn sebebi belgeyi sonuna kadar yazdýrmak
{
	karakter=getc(belge);
	printf("%c",karakter);
}
while(karakter!=EOF);
fclose(belge);
}
