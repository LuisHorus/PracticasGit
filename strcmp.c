

//		strcmp	
//(cadena1,cadena2)
/*Compara 2 cadeanas de texto caracter a caracter es sensible a mayusculas yh minusculas.
Cuando se Encuetra una difeencia de valor decimal segun el codigo ASCCI el cual corresponde a
la siguiente tabla*/

//si cadena 1 es		Entonces devuelve
//igual que cadena2				0
//mayor que cadena2				n>0
//Menor que cadena2				n<0



#include<stdio.h>
#include<string.h>

int main(){
	
	char clavesecreta[] = "contraseña";
	char usuario[128]="";
	int intenrosrestantes=3;
	


do
{
	printf("\nEscribe la clave secreta: ");
	fflush(stdin);	//limpia el esapcio de memoria
	scanf("%s",usuario);

	//Validacion contraseña

	if (strcmp(clavesecreta,usuario)==0)
	{
		printf("\nBienvenido al sistema\n");
		break;
	}else{

		intenrosrestantes--;
		printf("\nClave secreta incorrecta, le quedan %i intentos",intenrosrestantes);

	}
//
} while (intenrosrestantes>0);
	

	return 0;
}