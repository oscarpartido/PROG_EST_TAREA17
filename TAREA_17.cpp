/*autor: Oscar vivaldi Partido Ramirez   fecha_01/03/2022
programa que pida el salario de trabajadores de una empresa
-terminara cuando se introduce 0 
-calcular la media 
*/

#include <stdio.h>

int main(){

int i=1 ;
float invalido,cont=0,salario,media=0, total=0;

do{
	printf("Introduce el salario del trabajador Nm.%d:",i);
	scanf("%f",&salario);
	
	if(salario!=0){
		total+=salario;
		i++;
		cont++;
	}
	else if(salario==0){
		invalido++;
		printf("Numero Invalido!!!\n");
	}

}while(salario!=0);

media=total/cont;


printf("la media de los trabajadores es: %.2f",media);

	
return 0;	
}


