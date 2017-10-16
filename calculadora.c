#include <stdio.h>
#include <conio.h>

int main ()
{	
	int calculadora, opcion;
	
	printf("BIENVENIDOS A LA CALCULADORA BASICA!");
	getch();
	printf("\nQUE OPERACION DESEAS REALIZAR:");
	printf("\n1) SUMA.");
	printf("\n2) RESTAR.");
	printf("\n3) MULTIPLICAR.");
	printf("\n4) DIVIDIR.");
	printf("\n5) SALIR.");
	printf("\nESCOGE UNA DE LAS CUATRO OPCIONES: ");
	scanf("%d", &calculadora);

	while(calculadora)
	{
		switch(calculadora)
		{
			case 1:
				{
				int num1, num2, num3;

				printf("Inserte el primer numero: ");
				scanf("%d", &num1);
				printf("Inserte el segundo numero: ");
				scanf("%d", &num2);
				
				num3 = num1 + num2;
				printf("La suma es: %d", num3 );
				
				getch();
				}
				break;
			case 2:
				{	
				int num1, num2, num3;
				
				printf("Inserte el primer numero: ");
				scanf("%d", &num1);
				printf("Inserte el segundo numero: ");
				scanf("%d", &num2);
				
				num3 = num1 - num2;
				printf("La resta es: %d", num3);
				
				getch();
				}
			break;
			case 3:
				{
				int num1, num2, num3;
				
				printf("Inserte el primer numero: ");
				scanf("%d", &num1);
				printf("Inserte el segundo numero: ");
				scanf("%d", &num2);
				
				num3 = num1 * num2;
				printf("La multiplicacion es: %d", num3);
				
				getch();
			}
			break;
		case 4:
			{
				int num1, num2, num3;
			
				printf("Inserte el primer numero: ");
				scanf("%d", &num1);
				printf("Inserte el segundo numero: ");
				scanf("%d", &num2);
			
				num3 = num1 / num2;
				printf("La division en total es: %d", num3);
				
				getch();	
			}
			break;
		case 5:
			printf("Muchisimas gracias por utilizar nuestra calculadora ;)");
			getch();
			return 0;
			break;
		default:
			printf("La operacion que has escogido no existe.");
			
			getch();
			break;
		}
	printf("\n");
	printf("\nQUE OPERACION DESEAS REALIZAR:");
	printf("\n1) SUMA.");
	printf("\n2) RESTAR.");
	printf("\n3) MULTIPLICAR.");
	printf("\n4) DIVIDIR.");
	printf("\n5) SALIR.");
	printf("\nESCOGE UNA DE LAS CUATRO OPCIONES: ");
	scanf("%d", &calculadora);
	}

}
