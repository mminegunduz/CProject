#include <stdio.h>
//puts'daki s stringden putc'deki c chardan geliyor
int main(void) {
FILE *dosya;
dosya=fopen("C:\\Users\\DELL\\Desktop\\yeni.txt","w");
fputs("Mine Gunduz",dosya);
putc('\n',dosya);
fputs("Namik Kemal Universitesi",dosya);
fclose(dosya);
  return 0;
}
