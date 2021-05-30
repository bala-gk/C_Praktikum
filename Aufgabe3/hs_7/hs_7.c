#include <stdio.h>

int zaehlen();

int zaehlen(){
	static int a=0;
	a+=1;

	return(a);
}


int main(){
		
	printf("\n1 = %d\n",zaehlen());
	printf("\n2 = %d\n",zaehlen());
	printf("\n3 = %d\n\n",zaehlen());
	return 0;
}
