/*Name = Bala Krishnan Gopala Krishnan
 * Aufgabe = 6.2*/

#include<stdio.h>

int main(){
	int a[3][3][3];
	int *ptr;
	ptr = &a[0][0][0];
	int count = 1;
	int x;
	for(x = 0; x < sizeof(a); x++){
		*ptr = count;
		ptr++;
		count+=1;
	}

	int i,j,k;
	for(i = 0; i <= 4; i++){
		for(j = 0; j <= 2; j++){
			for(k = 0; k <= 2; k++){
				printf("\nElement: %d\n",a[i][j][k]);
			}
		}
	}

	/*printf("\nElement[0][0][5] = %d und Element[3][3][10] = %d",a[0][0][5], a[3][3][10]);*/
	return(0);
}	

