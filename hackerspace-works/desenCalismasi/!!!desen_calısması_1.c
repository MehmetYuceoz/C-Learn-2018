#include <stdio.h>
#include <conio.h>
main()
{
	int boy;
	char desen;
	
	printf("Sekilin buyuklugnu yaz�n�z = ");
	scanf("%d", &boy);
	
	printf("Sekilin desenini girin =");
	scanf("%c", &desen);
	
	for(int satir=0; satir < boy; satir++)
		{
			printf("%c", desen);
		}	
}
