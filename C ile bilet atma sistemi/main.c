#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int dogumtarihi,yas=0,odeme,para,kalan=0,srg,kln,sn;
	int bugunkuyil=2023,ogrenci=50,yetiskin=80;
	int misir=20;
	char isim[1];
	
	printf("Bilet alma arayuzune hosgeldiniz. Lutfen isim soy isim ve dogdugunuz yili sisteme tuslayiniz.\n");
	gets(isim);
	scanf("%d",&dogumtarihi);
	yas=bugunkuyil-dogumtarihi;
	printf("Yasiniz %d dir\n",yas);
	
	if(yas>=18 && yas<=25){
		
		printf("Ogrenci bileti uzerinden ucretlendiriliceksiniz.Ucret 50 TLdir.\n");
	}
	else{
		printf("Yetiskin Bileti uzerinden ucretlendiriliceksiniz.Ucretiniz 80 TL dir.\n");
	}
	    printf("Bakiye yukleme islemini Kredi/Banka karti ile yapmak icin 1 i Nakit ile yapmak icin 2 yi tuslayýnýz.\n");
	    
	    scanf("%d",&odeme);
	if(odeme==1)
	{
		printf("Kartla odemeyi sectiniz. Yaptiginiz alisverislerde 20 tl indirim kazanacaksiniz.\n");
		printf("Yuklemek istediginiz tutari giriniz. En fazla 200 tl girebilirsiniz.\n");
		scanf("%d",&para);
		if(para>200){
			printf("Yuklemek istediginiz tutar gecersizdir.\n");
		}
		else{
			printf("Bakiyeniz isleme aliniyor.\n");
		}
		printf("Ogrenci oldugunuzu dogrulamak icin 1 e yetiskin oldugunuzu dogrulamak icin 2 ye basin.\n");
		scanf("%d",&srg);
		if(srg==1){
			kalan=para-ogrenci+20;
			printf("Kalan ucret %d dir.",kalan);
		}
		else if(srg==2){
			kalan=para-yetiskin+20;
			printf("Kalan ucret %d dir.",kalan);
		}
		else{
			printf("Ýslem gecersizdir.");
		}
	}
    else if(odeme==2)
	{
    	printf("Nakit odemeyi sectiniz. Yaptiginiz alisverislerde yari yariya indirim kazanacaksiniz.\n");
    	printf("Yuklemek istediginiz tutari giriniz. En fazla 200 tl girebilirsiniz.\n");
    	scanf("%d",&para);
		if(para>200){
			printf("Yuklemek istediginiz tutar gecersizdir.\n");
		}
		else{
			printf("Bakiyeniz isleme aliniyor.\n");
		}
    	printf("Ogrenci oldugunuzu dogrulamak icin 1 e yetiskin oldugunuzu dogrulamak icin 2 ye basin.\n");
		scanf("%d",&srg);
		if(srg==1){
			kalan=para-ogrenci/2;
			printf("Kalan ucret %d dir.",kalan);
		}
		else if(srg==2){
			kalan=para-yetiskin/2;
			printf("Kalan ucret %d dir.",kalan);
		}
		else{
			printf("Ýslem gecersizdir.");
		}
	}
	else
	{
		printf("Gecersiz odeme yontemi.\n");
		
	}
	printf("Atistirmalik satin almak icin kalan parayi sisteme giriniz.\n");
	scanf("%d",&kln);
	printf("Patlamis misir 20TL dir.Yalnizca bir adet alabilirsiniz.\n");
	sn=kln-misir;
	printf("Biletinizle ilgili tum islemler tamamlanmistir. Kalan bakiyeniz %d dir. Bizi tercih ettiginiz icin tesekkur ederiz.\n",sn);
	
	
	
	
	return 0;
}
