/*Name = Bala Krishnan Gopala Krishnan
 * Aufgabe = 4.3*/

#include <stdio.h>

int i5;

int main(){
	int i1,i2,i3;
	static int i4;
	int* i6;
	i6 = 0;
	printf("\nAdresse der Variable i1: %p",&i1);
	printf("\nAdresse der Variable i2: %p",&i2);
	printf("\nAdresse der Variable i3: %p",&i3);
	printf("\nAdresse der static Variable i4: %p",&i4);
	printf("\nAdresse der globalen Variable i5: %p",&i5);
	printf("\nI6: %p",&i6);
	printf("\nI6: %p\n\n",i6);
	
	return 0;
}

