 #include<stdio.h>
 
typedef struct {
 	float x; float y;
 } punto;
 
punto lectura(){
	punto punto1;
 	printf("Dame la coordenada x\n");
	scanf("%f", &punto1.x);
	printf("\nDame la coordenada y\n");
	scanf("%f", &punto1.y);
	printf("\nLas cordenadas de tu punto son ( %f, %f)\n\n", punto1.x, punto1.y);
	return punto1;
 }
 
 float pendiente(punto a, punto b){      //recibe dos puntos, a los que se les asigna valor en main
 	float m, auxX, auxY;
 	auxX= a.x - b.x; auxY= a.y - b.y;  //no me salia haciendo los calculos directos :'v
 	m= auxY/auxX;
 	printf("El valor de la pendiente es %f\n", m);
 	return m;
 }
 
 
 
 int main (){
 	punto a, b, c; 
	float m1;
 	a=lectura(); b=lectura(); c=lectura();
 	m1= pendiente(a, b);              // usa la asiganción de a y b, que se dio dentro de esta función en la linea anterior
 	return 0;
 }
