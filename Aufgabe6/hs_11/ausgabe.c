/*Name = Bala Krishnan Gopala Krishnan
 * Aufgabe = 6.3*/

#include<stdio.h>

void ausgabe(unsigned int z);

void ausgabe(unsigned int z){
	int n;
	for (n = 3; n>=0; n--){
		printf("%u",*(((unsigned char*)&z)+n));
		if (n>0) printf(".");
	}
}

int main(){
	ausgabe(4294967295);
}


