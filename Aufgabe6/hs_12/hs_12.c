/*Name - Bala Krishnan Gopala Krishnan
 * Matrikelnummer: 018330315
 * Aufgabe: 6.4*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	double *p_a = (double*) malloc(10000*sizeof(double));
	/*printf("Rueckgabewert: %p",p_a);*/

	if (p_a == 0){
		printf("\nDie Reservierung von Speicherplatz war nicht erfolgreich\n");}
	else{
		printf("\nDie Reservierung von Speicherplatz war erfolgreich\n");
		}
	int i;
	for (i=0; i<10000; i++){
		*(p_a+i) = i;
	}
	double rand = *(p_a+9999);
	printf("Zufaelliger Wert: %lf\n",rand);	
	return(0);
}
