#include<stdio.h>
typedef struct {
	float real; float imaginaria;
} Complejo;

 void imprimir(Complejo pnumero){
	if(pnumero.real==0 && pnumero.imaginaria ==0){
		printf("%f\n", pnumero.real);
	 } else if (pnumero.real==0 && pnumero.imaginaria!=0){
	 	printf("%f i\n", pnumero.imaginaria);
	 } else if (pnumero.real!=0 && pnumero.imaginaria==0){
	 	printf("%f\n", pnumero.real);
	 } else if (pnumero.real!=0 && pnumero.imaginaria!=0){
	 	if(pnumero.imaginaria<0){
	 		printf("%f %f i\n", pnumero.real, pnumero.imaginaria);
		 } else {
		 	printf("%f + %f i\n", pnumero.real, pnumero.imaginaria);
		 }
	 }
	} 
	
Complejo lectura(){
	Complejo n;     //fflush(stdin);
	printf("Introduce un numero complejo\nLa parte real es: ");
	fflush(stdin);
	scanf("%f", &n.real);
	printf("Introduce la parte imaginaria");
	fflush(stdin);
	scanf("&f", &n.imaginaria);
	return n;
}

int menu(){
	int opcion;
	printf("Elije la opcion que deseas ejecutar\n");
	printf("1.- Lectura de numeros\
	\n2.-Suma\n3.-Resta\n4.-Multiplicacion\n5.-Division\
	\n6.-Complemento\n7.-Salir\n");
	do{
		fflush(stdin);
		scanf("%d", &opcion);
	} while (opcion<0 || opcion>7);
	return opcion;
}

int main (){
	int opcion;
	printf("Bienvenido, este es un programa que opera dos numeros complejos\n");
	do{
		system("cls");
		opcion=menu();
	} while (opcion!=7);
	return 0;
}
