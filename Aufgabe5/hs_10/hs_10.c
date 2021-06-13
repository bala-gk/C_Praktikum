/*Name = Bala Krishna Gopala Krishnan
 * Aufgabe = 5.1*/

#include<stdio.h>

void tausche(int *ptr_1, int *ptr_2);

void tausche(int *ptr_1, int *ptr_2){
	int temp;
	temp = *ptr_1;
	*ptr_1 = *ptr_2;
	*ptr_2 = temp;
}

int main(){
	int a = 2;
       	int b = 3;
	int *ptr_1;
	int *ptr_2;
	ptr_1 = &a;
        ptr_2 = &b;	
	tausche(ptr_1, ptr_2);
	printf("\na = %d und b = %d\n", a, b);
	return(0);	
}
