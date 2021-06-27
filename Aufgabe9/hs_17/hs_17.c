/*Name = Bala Krishnan Gopala Krishnan
 *Matrikelnummer = 018330315
 *Augabe = 9.1*/

#include<stdio.h>
#pragma pack(1)
#include<stdlib.h>

struct Geo
{
	double dLatitude;
	double dLongitude;
	float fAltitude;
};

struct Messwert
{
	int iMessungNummer;
	double dLuftdruck;
	float fTemperatur[3];
	struct Geo Position;
	struct Messwert *pNext;
};





void ausgabe(struct Messwert a);
void ausgabe_p(struct Messwert *ptr);
struct Messwert set_mw(int iMessungNummer);
int addToList(struct Messwert **pStart, int data);
int printList(struct Messwert *pStart);
void emptyList(struct Messwert **pStart);




void ausgabe(struct Messwert a){                                                                 
	printf("Messungnummer: %d\tSpeicherbedarf: %ld\n", a.iMessungNummer,sizeof(a.iMessungNummer));
	printf("dLuftdruck: %lf\tSpeicherbedarf: %ld\n", a.dLuftdruck, sizeof(a.dLuftdruck));
	printf("Position: %lf\tSpeicherbedarf: %ld\n", a.Position.fAltitude, sizeof(a.Position.fAltitude));
	a.fTemperatur[1] = 20.3f;
	for(int i=0; i<sizeof(a.fTemperatur)/sizeof(a.fTemperatur[0]); i++){
		printf("fTemperatur: %f\n", a.fTemperatur[i]);
	}
	printf("Speicherbedarf vom Array fTemperatur: %ld\n\n", sizeof(a.fTemperatur));
}



void ausgabe_p(struct Messwert *ptr){                                                      
	printf("Messungnummer: %d\tSpeicherbedarf: %ld\n", ptr->iMessungNummer,sizeof(ptr->iMessungNummer));
	printf("dLuftdruck: %lf\tSpeicherbedarf: %ld\n", (*ptr).dLuftdruck, sizeof((*ptr).dLuftdruck));
	printf("Position: %lf\tSpeicherbedarf: %ld\n", ptr->Position.fAltitude, sizeof(ptr->Position.fAltitude));
	ptr->fTemperatur[1] = 20.3f;
	for(int i=0; i<sizeof(ptr->fTemperatur)/sizeof(ptr->fTemperatur[0]); i++){
		printf("fTemperatur: %f\n", ptr->fTemperatur[i]);
	}
	printf("Speicherbedarf vom Array fTemperatur: %ld\n\n", sizeof(ptr->fTemperatur));
}



struct Messwert set_mw(int iMessungNummer){
	struct Messwert temp;
	temp.iMessungNummer = iMessungNummer;
	temp.dLuftdruck = 3.0;
	temp.fTemperatur[2] = 30.0f;
	temp.Position.fAltitude = 234.56f;
	return(temp);
}



int addToList(struct Messwert **pStart, int data){
	
	struct Messwert *ptr_Wert = (struct Messwert*) malloc(sizeof(struct Messwert));
	if (ptr_Wert == 0){
		exit(-1);
	}
	ptr_Wert->iMessungNummer = data;
	ptr_Wert->pNext = (*pStart);
	(*pStart) = ptr_Wert;
	int count = printList((*pStart));
	printf("\nZahl der Listenelemente: %d\n\n", count);
	return(0);

}



int printList(struct Messwert *pStart){
	int count = 0;
	struct Messwert *ptr = pStart;
	while (ptr != NULL)
	{
		//if(pStart->iMessungNummer == 3)
			//{
		ausgabe_p(ptr);
		count++;
		ptr = ptr->pNext;
			//}
	}
	return count;
}



void emptyList(struct Messwert **pStart){
	struct Messwert *ptr_current = *pStart;
	struct Messwert *pNext;
	while (ptr_current != NULL)
	{
		pNext = ptr_current->pNext;
		free(ptr_current);
		ptr_current = pNext;
	}
	(*pStart) = NULL;
}


int main(){
	
	/*struct Messwert mess1;	
	mess1.iMessungNummer = 1;
	mess1.dLuftdruck = 2.03;
	mess1.fTemperatur[1] = 18.3f;
	mess1.Position.fAltitude = 123.45f;

	struct Messwert messung;	
	printf("\nSpeicherbedarf von messung und messung.Position sind: %ld\t %ld\n\n",sizeof(messung), sizeof(messung.Position));

	mess1.Position.fAltitude = 123.45f; 
	ausgabe(mess1);
	printf("\nDer Wert von fTemperatur[1] nach dem Aufruf von ausgabe(): %f\n\n", mess1.fTemperatur[1]);
	struct Messwert *pMess = &mess1;
	ausgabe_p(pMess);
	printf("\nDer Wert von fTemperatur[1] nach dem Aufruf von ausgabe_p(): %f\n\n", pMess->fTemperatur[1]);

	struct Messwert mess2;
	mess2.iMessungNummer = 2;
	mess2 = set_mw(mess2.iMessungNummer);
	ausgabe(mess2);
	*/

	struct Messwert *pStart = NULL;
	int Resultat = addToList(&pStart, 3);
	if (Resultat == 0){
		printf("\nZufügen war erfolgreich\n");
		printf("Der Inhalt von pStart nach dem Zufügen: %p\n\n",pStart);
	}
	addToList(&pStart, 4);
	printf("\nListe wird jetzt gelöscht\n");
	emptyList(&pStart);
	printf("Der Inhalt von pStart nach dem Aufruf von emptyList(): %p\n",pStart);
	return(0);
}
