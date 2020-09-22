//		Strcat
// (Destino,Fuente)
// concatena (agrega) la cadean fuente en el destino debes considerar que la cadena destino
// Debe tener un tamaño tal que pueda albergar la cadena resultante


#include<stdio.h>
#include<string.h>

int main(){
	
	char cadena1[]="Luis";
	char cadena2[]="Alberto";
	char final[50]=" ";

	strcat(final,cadena1);
	strcat(final, " ");
	strcat(final,cadena2);

	printf("mi nombre es: %s",final);
	return 0;
}