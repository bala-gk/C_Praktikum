#include <stdio.h>

int main(){
	printf("\nTyp\t\t\tSpeicherbedarf\n\n");
	printf("int\t\t\t%lu\n",sizeof(int));
	printf("char\t\t\t%lu\n",sizeof(char));
	printf("long\t\t\t%lu\n",sizeof(long));
	printf("float\t\t\t%lu\n",sizeof(float));
	printf("double\t\t\t%lu\n",sizeof(double));
	printf("long double\t\t%lu\n\n",sizeof(long double));
	return 0;
}
