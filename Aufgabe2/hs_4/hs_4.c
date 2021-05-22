/*Aufgabe hs_4
 * Mister Muster - Matr.Nr.:575018330315 */

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("\nGeben Sie hier Ihre Werte:");
	if(scanf("%d%d",&a,&b)==2){
		c = a*b;
		printf("\nDas Produkt von %d und %d ist %d\n\n",a,b,c);
	}
	else{
		printf("\nUnerwartete Werte sind eingegeben!\n\n");	
	}
}

