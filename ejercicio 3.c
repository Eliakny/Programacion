#include <stdio.h>

int main(){
	
    float compras, monto_compras, descuento; 
	int etiqueta, cedula, digito, cont_cedu, productos;
	
	printf("\nIngrese el color de la etiqueta: 1 morado o 2 amarillo\n ");
	scanf("%d", &etiqueta);
	switch(etiqueta){
		case 1: printf("\nEl producto es de etiqueta morado"); break;
		case 2: printf("\nEl producto es de etiqueta amarillo"); break;
		default: printf("\nno esta en el rango de 1-2");break;
	}
	
	printf("\nIngrese la cantidad de productos: ");
	scanf("%d", &productos);
	
	if(productos >= 3){
	
	printf("\nIngrese el monto de la compra: ");
	scanf("%f", &compras);
	
	if( (compras >= 1000) && (compras <= 5000) ){
	
	
    printf("\nIngrese su cedula:");
	scanf("%d", &cedula);
	
	digito = cedula % 10;
	
	printf("\nEl ultimo digito de la cedula es:%d", digito);

	if(digito % 2 == 0){
		descuento = compras * 0.05;
		monto_compras = compras - descuento;
	}
	else{
		descuento = compras * 0.03;
		monto_compras =  compras - descuento;
	}
	    printf("\nDescuento por cedula es:%2.f",monto_compras);
}

}
	return 0;
}
