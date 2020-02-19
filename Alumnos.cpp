#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nombre[25];
	float calificacion;
} Materia;

typedef struct{
	char nocta[10];
	char nombre[25];
	char apellidos[50];
	Materia calificaciones[5];
} Alumno;

typedef struct{
	char numero[5];
	int cantidadNuevoIngreso;
	Alumno Alumnos[300];
} Generacion;

Materia LeerMateria(){
	Materia LocMateria;
	printf("Cual es el nombre de la materia?\n\t");
	fflush(stdin);
	gets(LocMateria.nombre);
	printf("Sobre esta materia, cual es su calificion?\n\t");
	fflush(stdin);
	scanf("%.2f", &LocMateria.calificacion);
	return LocMateria;
}

Alumno LeerAlumno(){
	Alumno LocAlumno;
	int materia;
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

float PromedioAlumno(Alumno A){
	float resultado;
	/* A.calificacion+B.calificacion+C.calificacion+D.calificacion+E.calificacion = resultado; */
	// resultado=A.calificaciones.calificacion[0] + A.calificaciones.calificacion;
	return resultado;
}


int PromedioMateria(){
	
}

int main(){  // printf("");  fflush(stdin);
    printf("Bienvenido, este es un programa que calcula los promedios de los alumnos de la generacion 2020\n");
	Generacion G2020;
	int alumno;
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
	}

	system("pause");
	
}
