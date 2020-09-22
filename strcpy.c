//* strcpy (Destino,fuente)
// permite copiar una cadena de texto en otra. Debees considerar que la dimension del arrays
//destino debe ser igual o mayor que el array origen y que ademas sobrescriba el contenido del
// destino (de existir).

#include<stdio.h>
#include<string.h>	//llamamos la libreria

int main(){
	
	char origen[]="Programacion";

	char destino[12];

	//copiamos contenido y lo mostramos

	strcpy(destino,origen);

	printf("%s",destino);

	return 0;
}