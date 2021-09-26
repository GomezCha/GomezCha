#include <stdio.h>
#include <stdlib.h>

void ejercicio1(){
	int num;
		
	printf("Introduzca un numero: ");
	scanf("%d", &num);
	
	if (num < 0 && num %2 == 0) {
		printf("\nEl numero que introdujo es negativo y es par");
	}
	else if (num < 0 && num %2 != 0){
		printf("\nEl numero que introdujo es negativo y es impar");
	}
	else if (num > 0 && num %2 == 0){
		printf("\nEl numero que introdujo es positivo y es par");
	}
	else {
		printf("\nEl numero que introdujo es positivo y es impar");
	}
}

//La solución no es correcta para el ejercicio 2 => 0.1
void ejercicio2(){int num;
		
	printf("Introduzca la edad de la Persona: ");
	scanf("%d", &num);
	
	//Utilice las compuertas AND, OR, resultan más convenientes por ejemplo && ||
	if (num > 0 , num < 18  ) {
		printf("\nLa edad es de una persona MENOR");
	}
	else if (num >= 18 , num <=59 ){
		printf("\nLa edad es de una persona MEDIA");
	}
	else if (num > 60 ){
		printf("\nLa edad es de una persona VIEJA");
	}
}


void ejercicio3(){int main; //se coló este int main aquí, de esta forma no se ejecuta el código. Cuidado con el uso de las palabras reservadas => 0.6
float gradosC, gradosF;
	
	printf("Introduce los Grados Fahrenheit:");
	scanf("%f",&gradosC);
	gradosF= (gradosC - 32) * 5/9 ;
		  
	if (gradosF>=-10 , gradosF<0){
			printf("\nEn Celsius la temperatura esta fria: %.2f", gradosF);
	}
	else if(gradosF>=0 , gradosF<30){
		printf("\nEn Celsius la temperatura esta Normal: %.2f", gradosF);
	}
		else if(gradosF>=30){
		printf("\nEn Celsius la temperatura esta Caliente: %.2f", gradosF);
	}
	
	

	
	

}

// 0.6
void ejercicio4(){int mes;
	printf("Pon el numero del mes que desee:");
	scanf("%i",&mes);
	
	switch(mes){
		case 1:printf("\nEnero. tiene 31 dias\n");break;
		case 2:printf("\nFebrero. tiene 28 dias\n");break;
		case 3:printf("\nMarzo. tiene 31 dias\n");break;
		case 4:printf("\nAbril. tiene 30 dias\n");break;
		case 5:printf("\nMayo. tiene 31 dias\n");break;
		case 6:printf("\nJunio. tiene 30 dias\n");break;
		case 7:printf("\nJulio. tiene 31 dias\n");break;
		case 8:printf("\nAgosto. tiene 31 dias\n");break;
		case 9:printf("\nSeptiembre. tiene 30 dias\n");break;
		case 10:printf("\nOctubre. tiene 31 dias\n");break;
		case 11:printf("\nNoviembre. tiene 30 dias\n");break;
		case 12:printf("\nDiciembre. tiene 31 dias\n");break;
		default:printf("\nSe equivoco de numero. tiene 28 dias\n");
		
	}
	
}

void ejercicio5(){
}

//0.6
void ejercicio6(){float D,A,E;
	
	printf("Ingrese su año de nacimiento:");
	scanf("%f",&A);
	
	E=2021-A;
	
	if(E>=18){
		printf("\nSu edad es valida para votar\n");
	}
	
	else if(E<18){
		printf("Usted es menor de edad no puede votar");
	}	
		printf("\nIngrese la distancia en metros de su residencia al centro de votacion:\n");
		scanf("%f",&D);
		
		if(D>200){
			printf("\nLa distancia no es Valida, Usted debe que residir a una distancia menor o igual a 200 metros\n");
		}
		
		else if(D<=200){
			printf("\nDistancia  Valida\n");
		}


}





int main(){
	int op = 0;
	
	printf("\n1.Ejercicio de ejemplo\n");
	printf("\n2.Ejercicio 2\n");
	printf("\n3.Ejercicio 3\n");
	printf("\n4.Ejercicio 4\n");
	printf("\n5.Ejercicio 5\n");
	printf("\n6.Ejercicio 6\n");
	printf("\nElegir opcion\n");
	
	scanf("%d", &op);
	
	switch(op){
		case 1: system("cls");
				ejercicio1();
				break;
		case 2: system("cls");
				ejercicio2();
				break;
		case 3: system("cls");
				ejercicio3();
				break;
		case 4: system("cls");
				ejercicio4();
				break;
		case 5: system("cls");
				ejercicio5();
				break;
		case 6: system("cls");
				ejercicio6();
				break;
		default: break;
	}
	
	return 0;
}
