#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{  //estructura de una materia
	char nombre[25];
	float calificacion;
} Materia;

typedef struct{  //estructura de un alumno, tiene una variable de tipo "materia" es decir, una estructura adentro de otra estructura
	char nocta[10];
	char nombre[25];
	char apellidos[50];
	Materia calificaciones[5];
} Alumno;

typedef struct{  //estructura de una generación de alumnos, con una variable de tipo alumno
	char numero[5];
	int cantidadNuevoIngreso;
	Alumno Alumnos[100];
} Generacion;

Materia LeerMateria(){ //función que escanea y devuelve los datos de una variable tipo materia
	Materia LocMateria;
	printf("Cual es el nombre de la materia?\n\t");
	fflush(stdin);
	gets(LocMateria.nombre);
	printf("Sobre esta materia, cual es su calificion?\n\t");
	fflush(stdin);
	scanf("%.2f", &LocMateria.calificacion);
	return LocMateria;
}

Alumno LeerAlumno(){  //lo mismo, pero para un alumno, para llevar la variable de tipo materia que tiene la estructura alumno, llama a la funcion de arriba
	Alumno LocAlumno;
	int materia;
	float promedioAlumno;
	printf("Introduzca el numero de cuenta del alumno: \n\t");
	fflush(stdin);
	gets(LocAlumno.nocta);
	printf("Especifique el nombre de pila del alumno: \n\t");
	fflush(stdin);
	gets(LocAlumno.nombre);
	printf("Ahora los apellidos del alumno: \n\t");
	fflush(stdin);
	gets(LocAlumno.apellidos);
	printf("Sobre este alumno, introduzca los datos de sus materias\n");
	for(materia=0; materia<5; materia++)
	{
		LocAlumno.calificaciones[materia]=LeerMateria();
	}
	printf("Pasemos al siguiente alumno\n\n\n");
	return LocAlumno;
}

float PromedioAlumno(Alumno LocAlumno){  //funcion para sacar promedios (vacia aun) 
	float resultadosuma, resultadopromedio;
	
	resultadosuma=LocAlumno.calificaciones[0].calificacion + LocAlumno.calificaciones[1].calificacion +LocAlumno.calificaciones[2].calificacion\
	+LocAlumno.calificaciones[3].calificacion+LocAlumno.calificaciones[4].calificacion;
	resultadopromedio = resultadosuma/5;
	printf("El promedio del alumno es %.2f", &resultadopromedio);
	return resultadopromedio;
}


int PromedioMateria(Generacion pG2020){ //funcion para sacar promedios, no tiene nada aun
	return 0;
}

int main(){  //funcion main :v
    printf("Bienvenido, este es un programa que calcula los promedios de los alumnos de la generacion 2020\n");
	Generacion G2020;
	float promedioAlumno, promedioMateria; 
	int alumno;
	Alumno Aux;
	printf("Para tal accion necesitaré la cantidad de alumnos que se usara durante el procedimiento\n");
	strcpy(G2020.numero, "2020");
	printf("Por favor, introduzca la cantidad de alumnos que se usara para calcular su promedio\n");
	scanf("%i", &G2020.cantidadNuevoIngreso);
	// G2020.cantidadNuevoIngreso=200;
	printf("A continuación se le solicitaran todos los datos de cada uno de los alumnos\n");
	printf("Tome en cuenta que se registraran 5 materias por alumno\n");
	for(alumno=0; alumno<G2020.cantidadNuevoIngreso; alumno++)
	{
		G2020.Alumnos[alumno]=LeerAlumno();
	//	promedioAlumno = PromedioAlumno(Alumno G2020.Alumnos[alumno]);
	}
    // promedioAlumno = PromedioAlumno(Alumno Generacion G2020.Alumnos);
	system("pause");
	
}
