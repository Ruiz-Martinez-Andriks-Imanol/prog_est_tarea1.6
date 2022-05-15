/* Autor:	Andriks Imanol Ruiz Mart�nez, Realizado:03/02/22
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
  
    -Variables enteras, flotantes y doubles
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -funciones de la libreria math.h
    -Comentarios para la documentaci�n interna del programa
	*/
#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[]){
	//Declaraci�n de variables
	int a;
	float volumen, area;
	double numero1 = 3;
	double raizCuadrada = sqrt(numero1);
	double numero2 = 2;
	double raizCuadrada2 =sqrt(numero2);
	//Entrada de datos
	printf("CALCULADORA DE AREA Y VOLUMEN DE TETAEDRO REGULAR\n\n");
	printf("Ingresa a: ");
	scanf("%d",&a);
	//Proceso
	area=raizCuadrada*(a*a);
	//volumen
	volumen=raizCuadrada2*(a*a)/12;
	//Salida
	printf("El area del tetaedro regular es: %f\n",area);
	printf("El volumen del tetaedro regular es: %f",volumen);
return 0;
}
