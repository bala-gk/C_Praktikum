#include <stdio.h>

int main(){
	printf("\nTyp\t\tSpeicherbedarf\n\n");
	printf("int\t\t%lu\n",sizeof(int));
	printf("char\t\t%lu\n",sizeof(char));
	printf("long\t\t%lu\n",sizeof(long));
	printf("float\t\t%lu\n",sizeof(float));
	printf("double\t\t%lu\n\n",sizeof(double));
	return 0;
}
