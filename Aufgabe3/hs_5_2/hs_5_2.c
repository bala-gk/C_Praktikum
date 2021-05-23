#include<stdio.h>

int main(){
	int a,b; 
	float c;
	float d;
	a = 1234567890;
	c = a;
	b = c;
	d = 0.4;
	printf("\n Die beiden Werte in die int Variablen sind: %d und %d\n",a,b);
	printf("\n Der Unterscheid zwischen die beiden Werte in die int Variablen ist:%d\n\n",a-b);
	printf("\n Der Wert in die float Variable ist: %0.12f\n\n",d);
}

