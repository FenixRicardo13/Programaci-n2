#include<stdio.h> 
#include<wchar.h>
#include<locale.h>
// printf(""); fflush(stdin);
typedef struct Contacto{   // estructura del "contacto"  ESTABA INTENTANDO GENERAR UN ARREGLO DE ESTAS ESTRUCTURAS 
	char Nombre[50];
	int FechaNacimiento[5];
	char Direccion[20];
	float TelefonoCasa;
	float TelefonoCelular;
	float TelefonoTrabajo;
	int Estado;
	int TipoContacto;
	int TelefonoPrincipal;
}Contacto;

int LeerTipo(){  // funcion que lee el "tipo" del contacto, tiene un menu que describe los tipos de contactos que hay
	int tipocnt;
	printf("Elija el tipo de contacto: \n\n");
	do{
	printf("1.-Contacto de Trabajo\t\t");
	printf("2.-Familiar\t\t");
	printf("3.-Amigos\n");
	fflush(stdin);
	scanf("%i", &tipocnt);
	} while (tipocnt > 4 || tipocnt < 0);
	
	return tipocnt; //regresa un entero entre 1 y 3
}

Contacto LeerContacto(){    //funcion que lee un contacto, llama a la que lee el tipo
	Contacto cnt;
	setlocale(LC_ALL, "");
	printf("\nIntroduzca los datos del contacto que desea añadir\n");
	cnt.TipoContacto=LeerTipo();
	printf("El nombre completo del contacto es: ");
	fflush(stdin);
	gets(cnt.Nombre);
	printf("La fecha de nacimiento de su contacto: ");
	fflush(stdin);
	scanf("%.0f", &cnt.FechaNacimiento);
	printf("Escriba la dirección: ");
	fflush(stdin);
	gets(cnt.Direccion);
	printf("Ahora sus datos telefonicos. Si desconoce alguno de los datos puede marque 0\n");
	printf("Telefono de casa: ");
	fflush(stdin);
	scanf("%.0f", &cnt.TelefonoCasa);
	printf("Telefono de Trabajo: ");
	fflush(stdin);
	scanf("%.0f", &cnt.TelefonoTrabajo);
	printf("Numero de Celular: ");
	fflush(stdin);
	scanf("%.0f", &cnt.TelefonoCelular);
	printf("Elija cual es el numero de contacto PRINCIPAL: \n");
	do{
	printf("1.- Telefono de Trabajo\t");
	printf("2.- Telefono de Casa\t");
	printf("3.- Celular\n");
	scanf("%i", &cnt.TelefonoPrincipal);
	} while (cnt.TelefonoPrincipal > 4 || cnt.TelefonoPrincipal < 0);
	cnt.Estado=1;  //si el estado es 1, se considera activo, si es 0 esta inactivo
	return cnt;
}

int Menu(){                //funcion del menu
	int opc;
	printf("Elije la opción que desea ejecutar\n");
	printf("1.-Leer contacto\n");
	printf("2.-Visualizar todos los contactos de un tipo\n");
	printf("3.-Eliminar contacto\n");
	printf("4.-Buscar un contacto\n");
	printf("5.-Salir del programa\n");
	fflush(stdin); scanf("%i", &opc);
	return opc;
}

 void ImprimirContacto(Contacto cnt){   //funcion que imprime el contacto
 	if(cnt.Estado == 1){
	 
 	printf("El nombre del contacto es %s \n", cnt.Nombre);
 	printf("La dirección del contacto es %s \n", cnt.Direccion);
 	printf("La fecha de nacimiento es %.0f", &cnt.FechaNacimiento);
 	printf("El telefono de casa es: %.0f", &cnt.TelefonoCasa);
 	printf("Telefono de trabajo: %.0f", cnt.TelefonoTrabajo);
 	printf("Celular: %.0f", cnt.TelefonoCelular);
 	switch(cnt.TipoContacto){
 		case 1: printf("Es un contacto de trabajo\n"); break;
 		case 2: printf("Fue registrado como familiar\n"); break;
 		case 3: printf("Fue registrado como amigo\n"); break;
	 }
	 switch(cnt.TelefonoPrincipal){
	 	case 1: printf("Su telefono principal es %.0f", cnt.TelefonoTrabajo); break;
	 	case 2: printf("Su telefono principal es %.0f", cnt.TelefonoCasa); break;
	 	case 3: printf("Su telefono principal es %.0f", cnt.TelefonoCelular); break;
	 }}
	 else{
	 	printf("No hay contacto para mostrar\n");
	 }
 }

void VisualizarContactos(Contacto cnt, int m, int j){
	int tipocnt;
	printf("Deberas ingresar el tipo de los contactos que deseas visualizar\n");
	tipocnt = LeerTipo();
	for (j; j<m; j++){ 
	if(cnt.TipoContacto == tipocnt){
	    void ImprimirContacto(Contacto cnt);}
	}
}

int main(){
	setlocale(LC_ALL, "");
	int opc, n=1, i=n-1;
	Contacto persona[n];
	/*printf("Define la cantidad de contactos que deseas usar: ");
	scanf("%i", &n);*/
	opc=Menu();
	switch (opc){
		case 1: n=n+1; persona[i]=LeerContacto(); break;
		case 2: /*void VisualizarContactos(Contacto persona, int n, int i); */ break;
		case 3: break;
		case 4: break;
	}
	
	return 0;
}




