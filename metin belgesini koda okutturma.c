#include <stdio.h>
//Metin Belgesini Okuma
int main(void) {
FILE *belge;
char karakter;
belge=fopen("C:\\Users\\DELL\\Desktop\\yeni.txt","r");

do     //do-while kullanmam�z�n sebebi belgeyi sonuna kadar yazd�rmak
{
	karakter=getc(belge);
	printf("%c",karakter);
}
while(karakter!=EOF);
fclose(belge);
}
