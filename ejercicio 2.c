#include<stdio.h>

int main(void){

  int numero, unidad, decena, centena;

  printf("Ingresa un numero de 3 digitos: ");
  scanf("%d", &numero);

  centena = numero / 100;
  decena = (numero % 100) / 10;
  unidad = ((numero % 100) % 10);

  printf("El numero invertido es: %d%d%d\n", unidad, decena, centena);

return 0;
}
