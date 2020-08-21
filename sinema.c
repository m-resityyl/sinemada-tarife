#include <stdio.h>
#include <stdlib.h>



int main() {
	
	char a[10],b[10],c[100],d[4],e[10],f[8];
	printf("Kitap adi:");
	scanf("%s",a);
	
	printf("Yazari:");
	scanf("%s",b);

    printf("Sayfa sayisi:");
	scanf("%s",c);
	
	printf("Basim tarihi:");
	scanf("%s",d);
	
	printf("Basim evi:");
	scanf("%s",e);
	
	printf("Turu:");
	scanf("%s",f);
	
	printf("\n\n**********Kitap Bilgileri**********\n\n");
	
	printf("-Kitabin adi: %s\n",a);
	printf("-Kitabin yazari: %s\n",b);
	printf("-Kitabin sayfa sayisi: %s\n",c);
	printf("-Kitabin basim tarihi: %s\n",d);
	printf("-Kitabin basim evi: %s\n",e);
	printf("-Kitabin turu: %s\n\n",f);
	
	printf("***********************************");
	
	return 0;
}
