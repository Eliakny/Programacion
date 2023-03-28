/*
  Universidad de Carabobo
  Facultad de Ciencias y Tecnologia
  Departamento de Computacion
  
  Asignatura: Fundamentos de Programacion
  Seccion: 04
  
  Estudiante: Eliakny Mirabal
  Cedula: 30.913.458
  
  Problema 1 
*/

#include <stdio.h>

int main() {
    /* Declaracion e inicializacion de variables */
    int numero1 = 0;
    int numero2 = 0;
    int suma1 = 0;
    int suma2 = 0;
    
    /* Lectura de los numeros por el teclado */
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    
    /* Calculo de la suma de los divisores del primer numero */
    for (int i = 1; i <= numero1 / 2; ++i) {
        if (numero1 % i == 0) {
            suma1 = suma1 + i;
        }
    }
    
    /* Calculo de la suma de los divisores del segundo numero */
    for (int j = 1; j <= numero2 / 2; ++j) {
        if (numero2 % j == 0) {
            suma2 = suma2 + j;
        }
    }
    
    /* Mensaje por pantalla */
    if (suma1 == numero2 && suma2 == numero1) {
        printf("Los numeros dados son amigos\n");
    }
    else {
        printf("Los numeros dados no son amigos\n");
    }
    
    return 0;
}



