#include <stdio.h>
#include <math.h>

int main(){
	double Kapital, Zinssatz, Z, ZZ, E_Z; 
	int Jahren_max, Jahr = 1;
	printf("\nBitte geben Sie hier das Startkapital ein:");
	scanf("%lf",&Kapital);
	printf("\nBitte geben Sie hier den Zinssatz ein:");
	scanf("%lf",&Zinssatz);
	printf("\nBitte geben Sie hier die Anzahl von Jahren für Zinsen ein:");
	scanf("%d",&Jahren_max);
	printf("\n\nJahr\t\tZinsen\t\tEinfache Zinsen\t\tZinseszinsen\n");

	/*Z = (Kapital*Zinssatz*Jahren_max)/100;
	ZZ = Kapital*pow(1+(Zinssatz/100),Jahren_max);*/
	
	while (Jahr < Jahren_max+1){
		Z = (Kapital*Zinssatz*Jahr)/100;
		E_Z = Z+Kapital;
		ZZ = Kapital*pow(1+(Zinssatz/100),Jahr);
		printf("%d\t\t%lf\t\t%lf\t\t%lf\n",Jahr,Z,E_Z,ZZ);
		Jahr+=1;
	}
	return 0;
}
		
