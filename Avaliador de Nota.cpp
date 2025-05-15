#include <stdio.h>
int main () {
	
	printf ("---------- Avaliador Online ----------\n");
	
	float nota;
	float nota_14;
	int data_entrega;
	int data_limite = 20;
	
	printf ("Digite a sua nota: ");
	scanf ("%f", &nota);
	
	printf ("Digite a data de entrega: ");
	scanf ("%d", &data_entrega);
	
	if (data_entrega > data_limite && data_entrega <= data_limite + 5){
		nota_14 = nota - nota/4;
		printf ("Sua nota e: %2.f", nota_14);
	} else if (data_entrega <= data_limite){
	printf ("Sua nota e: %2.f", nota);
	} else if (data_entrega > 25){
		printf ("Tempo Limite Atingido, Sua Nota e 0");
	}
	}
