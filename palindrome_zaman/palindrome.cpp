#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Turkish");
	int hours, minute, hbas, hbir, mbas, mbir;
	
	printf("palindrome zaman kontrol programý");
	
	for (hours=0; hours <24; hours++){
	    
	    hbas= hours/10;
		hbir= hours % 10;
		
		

	for (minute=0; minute <60; minute++){
	
	mbas= minute/10;
	mbir= minute % 10;
	
	if(hbas==mbir && hbir==mbas)
		
	printf("\n %d%d:%d%d",hbas,hbir,mbas,mbir);

	
	
	    
		}

	}
		printf("\n\npalindrome zamanlar gösterilmiþtir");	
	
	
	
	return 0;
}
