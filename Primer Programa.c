 #include<stdio.h>
  // fflush(stdin);
typedef struct {
 	float x; float y;
 } punto;
 
punto lectura(){
	punto punto1;
 	printf("Introduzca la coordenada x: ");
 	fflush(stdin);
	scanf("%f", &punto1.x);
	printf("Introduzca la coordenada y: ");
	fflush(stdin);
	scanf("%f", &punto1.y);
	printf("Las cordenadas de tu punto son ( %.2f, %.2f)\n\n", punto1.x, punto1.y);
	return punto1;
 }
 
 float pendiente(punto a, punto b){      //recibe dos puntos, a los que se les asigna valor en main
 	float m, auxX, auxY;
 	auxX= a.x - b.x; auxY= a.y - b.y;  //no me salia haciendo los calculos directos :'v
 	m= auxY/auxX;
 	printf("El valor de la pendiente es %.2f\n", m);
 	return m;
 }
  
 float ecuacion (punto a, float m){
    // y - a.y = m(x -a.x)      ======>     y - mx = a.y - m(a.x)           ======>        y = mx + b
    float b= a.y - m*a.x;
    printf("La ecuacion de la recta es y = %.2f x + %.2f\n", m, b);
return b; 
 }
 
 /* int comprobar (punto c, float m, float b){
  	float r = m*c.x + b; int si;
  	 if (c.y = r){
  	 	printf("\nEl tercer punto corresponde a la recta formada por lo dos primeros\n");
  	 	si=1;
	   }else{
	   	printf("\nEl tercer punto no corresponde a la recta formada por los dos primeros\n");
	   	si=0;
	   } 
  	return si;
  } */  // funcion que intentaba determinar si 
 
 int main (){
 	printf("\n\t\tEste es un programa que toma tres puntos en el plano dados por usted\n");
 	punto a, b, c; 
	float m1, b1;
 	printf("Primer punto\n"); a=lectura(); 
	printf("Segundo punto\n"); b=lectura();
 	m1= pendiente(a, b); b1=ecuacion(a, m1);             // usa la asiganción de a y b, que se dio dentro de esta función en la linea anterior
	printf("Tercer punto\n"); c=lectura();
	float r = m1*c.x + b1; 
  	 if (c.y == r){
  	 	printf("\nEl tercer punto corresponde a la recta formada por lo dos primeros\n");
	   }else{
	   	printf("\nEl tercer punto no corresponde a la recta formada por los dos primeros\n");
	   }
	return 0;   
	   
 }
 
 
 
