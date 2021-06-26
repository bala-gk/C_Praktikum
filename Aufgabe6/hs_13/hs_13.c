/*Name = Bala Krishnan Gopala Krishnan
 * Aufgabe = 6.5
 * Matrikelnummer = 018330315*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int var;
	int *pvar;
	pvar = &var;
	pvar = pvar+1;
	long int diff = pvar - &var;
	
	printf("\nDie Differenz zwischen pvar und &var = %ld",diff);	
	printf("\nDie Adresse von pvar = %p",pvar);
	printf("\nDie Adresse von var = %p\n",&var);
	
	*pvar = 123;
	printf("Wert in var: %d",*pvar);

	return(0);
}
