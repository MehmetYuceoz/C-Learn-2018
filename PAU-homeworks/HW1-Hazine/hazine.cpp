#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int e[10],jeton,toplam=0,Z[10];	/*"e" her jeton i�in rastgele atanan y�n de�erlerin tutuldu�u dizi*/   /*"Z" y�n belirteclerinin toplam�n�n yaz�ld��� dize*/ /* Z haznedeki jeton sayisini tutuyor*/
	srand(time(NULL));
	printf("Jeton Sayisi: ");
	scanf("%d",&jeton);
	
	
	for(int i=0;i<10;i++)   /*Z dizesisi i�in ayr�lan k�sm� s�f�rlad�m */
	{
		Z[i]=0;
	}
	
	for(int i=0; i<jeton; i++)
	{
		printf("%3d. jetonu atmak icin herhangi bir tusa basiniz ->",i+1);
		getch();
		
			for(int i=1; i<10; i++)
			{
				e[i]=(rand()%2);   /* jetonlarin civilere carptiginda y�nelecegi y�n� rastgele atar. */
			//		printf("e[%d] = %d\n" ,i,e[i]);       /* jetonun d�smesi i�in gereken rastgele de�erleri g�rmek i�in yazdirdim*/
			}
		
			for(int i=1; i<10; i++)			/* e dizisinin i�indeki "1" leri okutmak i�in say�lar� toplatt�m*/
			{
				toplam += e[i];   /* e dizesinde toplanan de�erleri toplam de�i�kenine yazd�rd�m*/
			}	
			
			Z[toplam]++;    /*d�ng� d�nd�kce s�ras� gelen haznedeki jeton say�s�n� Z dizesine yazd�m*/
			printf(" %2d. hazneye dustu..\n", toplam+1);  /*jetonlar toplam�n 1 fazlas� hazneye d���yor*/
			toplam=0;    /*toplam de�i�kenini s�f�rlad�m ��nk� i�lem t�m jetonlar i�in uygulanacak..*/
	}	
		
		printf("\n");
	
	for(int i=0;i<10;i++)
	{
		printf("%2d Haznedeki jeton sayisi = %d\n",i+1,Z[i]);
	}
/* ------------------------ histogram kismi ---------------------------*/

	printf("\n");
	printf("Jetonlarin histogram seklinde dagilimlari:\n");
	
	int max=0;
	for(int i=0;i<10;i++)
	{
		if(max<Z[i]) /*histogramda ba�� ceken jeton haznesini buldurdum*/
		{
			max=Z[i];
		}
	}

	while(1)
	{
		printf(" %2d|",max);
		for(int i=0;i<10;i++)
		{
			if(Z[i]>=max)   /*En �st sat�rdan ba�lay�p max a e�it yada b�y�k varsa (en �st saat�rda zaten en b�y�k max) |o| koyuyor [ yoksa  |  | koyar ]sonra sa�a do�ru devam ediyor. Sonra max� bir d���r�p alt sat�ra iniyoruz.*/
			{
				printf(" o |");
			}
			else
			{
				printf("   |");
			}	
		}
		printf("\n");
		max--;
		if(max==0) /*max s�f�rland���nda d�ng�den ��k�yoruz.*/
		{
			break;
		}
	}
	
	
	printf("---+---+---+---+---+---+---+---+---+---+---+\n");
	printf("   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|\n\n");
	
	
	
	

/*--------------------------son-----------------------*/
	printf("Hasan TEZCAN tarafindan hazirlanmistir.\n");
	printf("e mail: htezcan17@posta.pau.edu.tr\n");
	printf("Ogrenci No: 17253046\n");
 getch();
}


