/*Name = Bala Krishnan Gopala Krishnan
 * Matrikelnummer: 018330315
 * Aufgabe: 6.6*/

#include<stdio.h>
void ausgabe(int *a, long int n);

void ausgabe(int *a, long int n){
	printf("\nDie Größe des übergebenes Arrays ist: %ld\n",sizeof(a));
	int i;
	for (i=0;i<n;i++){
		printf("Element %d : %d\n", i, a[i]);
	}		
}

int main(){
	int arr[10];
	printf("\nDie Größe des Arrays arr: %ld",sizeof(arr));
	long int n = sizeof(arr)/sizeof(arr[0]);
	int i;
	for (i=0;i<n;i++){
		arr[i] = i+1;
	}
	ausgabe(arr, n);
	return(0);
}
