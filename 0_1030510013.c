#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
 {
 		int uretilenSayi,girilenSayi,temp,sayi,durum=0,kontrol=0,negatif,pozitif;
		int a,b,c,d,e,f,g,h,i,j;
	do{
		srand(time(NULL));
	uretilenSayi=rand() %9000+1000;             //SAYI URETME VE BASAMAKLARI KARSILASTIRMA
	temp=uretilenSayi;
	a=temp%10;
	temp=temp/10;	
	b=temp%10;
	temp=temp/10;	
	c=temp%10;
	temp=temp/10;	
	d=temp%10;
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
		kontrol=1;
	}
	}while(kontrol==0);
	
	//printf("%d",uretilenSayi);
	
	while(durum==0)
	{	
	printf("\nProgramin tuttugu 4 basamakli sayiyi tahmin ediniz =>\n ");
	scanf("%d",&girilenSayi);
	sayi=girilenSayi;
	
	
	e=sayi%10;//BIRLER BASAMAGI
	sayi=sayi/10;	
	f=sayi%10;//ONLAR BASAMAGI
	sayi=sayi/10;	
	g=sayi%10;//YUZLER BASAMAGI
	sayi=sayi/10;	
	h=sayi%10;//BINLER BASAMAGI
		
		if(a!=e && b!=f && c!=g && d!=h){			//BASAMAKLARIN KARSILASTIRILMASI
			printf(NULL);
		}
		
		
		if(a==f || a==g || a==h){
			negatif++;
		}
		else if(a==e){
			pozitif++;
		}
		
		if(b==e || b==g || b==h){
			negatif++;
		}
		else if(b==f){
			pozitif++;
		}
		
		if(c==e || c==f || c==h){
			negatif++;
		}
		else if(c==g){
			pozitif++;
		}
		
		if(d==e || d==g || d==f){
			negatif++;
		}
		else if(d==h){
			pozitif++;
		}
		
		
		for( i=0;i<pozitif;i++){
			printf("+ ");
		}
		for( j=0;j<negatif;j++){
			printf("- ");
		}
		if(pozitif==4){
			printf("Dogru tahmin!!!");
			durum=1;
		}
		pozitif=0;
		negatif=0;

		
	}



 	
 	
 	
	return (0);
}
