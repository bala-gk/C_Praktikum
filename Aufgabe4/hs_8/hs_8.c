/*Name = Bala Krishnan Gopala Krishnan
 * Aufgabe = 4.2*/

#include <stdio.h>

int main(){
	char* pa;
	float* pf;
	double* pd;
	long double* pld;

	printf("\nSpeicherbedarf eines Pointers vom Typ char: %lu\n",sizeof(pa));
	printf("Speicherbedarf eines Pointers vom Typ float: %lu\n",sizeof(pf));
	printf("Speicherbedarf eines Pointers vom Typ double: %lu\n",sizeof(pd));
	printf("Speicherbedarf eines Pointers vom Typ long double: %lu\n\n",sizeof(pld));

	return 0;
}
