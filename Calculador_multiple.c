//Calculador multiple
#include<stdio.h>
#include<math.h>
#include<windows.h>

int vc, vc1, vc2, vc3; //Variables de Control

int main (){
    vc = 1;

    while (vc ==1){
    vc1 = 1;

        while (vc1 == 1){
            vc3 = 1;
            printf("Calculador multiple\n");
            printf("Opcion 1. determinador de triangulos\n");
            printf("Opcion 2. Calculador de potencias\n");
            printf("Opcion 3. Descomponedor de numeros\n");
            printf("Opcion 4. Salir\n");
            scanf("%d",&vc2);
            if (vc2 == 4) return 0;
            if (vc2 < 1 || vc2 > 4) printf("Por favor introduzca una opcion valida\n");
            else vc1 = 0;
        }

        while (vc2 == 1 && vc3 == 1){
            int l1 , l2 , l3 , lm; //Lados del triangulo
            printf("Ingrese el valor de el primer lado: "); scanf("%d", &l1);
            printf("\nIngrese el valor de el segundo lado: "); scanf("%d", &l2);
            printf("\nIngrese el valor de el tercer lado: "); scanf("%d", &l3);
            lm = l1; 
            if (l2 > lm) lm = l2;
            if (l3 > lm) lm = l3;
            printf("El lado mayor es %d\n", lm);
            if (l1 == l2 && l2 == l3) printf("El triangulo es Equilatero\n");
            else if (l1 == l2 || l1 == l3 || l2 == l3) printf("El triangulo es Isosceles\n");
            else if (l1 != l2 && l1 != l2 && l2 != l3) printf("El triangulo es escaleno\n");
            printf("Desea calcular otro triangulo?:\nSi = 1\nNo = 0\n"); scanf("%d", &vc3);
        }

        while (vc2 == 2 && vc3 ==1){
            int b, e, p = 0; //Base, exponente, Potencia
            printf("\nIntroduzca el Valor de la base: "); scanf("%d", &b);
            printf("\nIntroduzca el valor de el exponente: "); scanf("%d", &e);
            p = pow(b,e);
            printf("\nEl resultado de %d elevado a %d es igual a = %d", b, e, p);
            printf("\nDesea calcular otra potencia?:\nSi = 1\nNo = 0\n"); scanf("%d", &vc3);
        }

        while (vc2 == 3 && vc3 == 1){
            int num, i, res;
            printf("Introduce el numero a descomponer\n"); scanf ("%d", &num);
            
            while (num < 1){
                printf("Por favor elije un numero positivo: ");
                scanf("%d", &num);
            }

            i = 1;
	        while (num > 0) {
		        res = num%10 * i;
		        printf("%d\n", res);
		        num /= 10;
		        i *= 10;
            }

        printf("\nDesea descomponer otro numero?:\nSi = 1\nNo = 0\n"); scanf("%d", &vc3);
        }

    printf("\nDesea calcular otra operacion?:\nSi = 1\nNo = 0\n"); scanf("%d", &vc);
    if (vc != 1) printf("\nFin del programa."); Sleep(1500);
    }

return 0;
}

//algun bug reportar, gracias ♥♥♥
