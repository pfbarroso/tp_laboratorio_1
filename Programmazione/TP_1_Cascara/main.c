#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <curses.h>
#include "funciones.h"
#undef isnan

int main()
{
    int opcion;
    float operando1;
    float operando2;
    int flag1 = 0;
    int flag2 = 0;
    int entero;
    int resultadoFac;

    do
    {
        if(flag1!=1)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n",operando1);
        }
        if(flag2!=1)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n",operando2);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            operando1 = IngresarPrimerOperando();
            flag1 = 1;		//Indico que se ingresó Op1
            break;
        case 2:
            operando2 = IngresarSegundoOperando();
            flag2 = 1;		//Indico que se ingresó Op2
            break;
        case 3:
            CalcularSuma(flag1,flag2,operando1, operando2);
            break;
        case 4:
            CalcularResta(flag1,flag2,operando1, operando2);
            break;
        case 5:
            CalcularDivision(flag1,flag2,operando1, operando2);
            break;
        case 6:
            CalcularMult(flag1,flag2,operando1, operando2);
            break;
        case 7:
            if (flag1 == 1)
            {
                entero = esEntero(operando1);
                if (entero == 1 && operando1 >= 0)
                {
                    resultadoFac = CalcularFactorial(operando1);
                    printf("================================================================\n");
                    printf("El factorial de %.0f es: %d \n",operando1, resultadoFac);
                    printf("================================================================\n");
                    break;
                }
                else
                {
                    printf("================================================================\n");
                    printf("Factorial: ERROR! El valor ingresado no es un numero valido.\n");
                    printf("================================================================\n");

                    break;
                }
            }
            else
            {
                printf("================================================================\n");
                printf("ERROR! Falta ingresar el operando.\n");
                printf("================================================================\n");
                break;

            }
        case 8:
            CalcularTodo(flag1, flag2, operando1, operando2);
            break;
        case 9:
            //seguir = 'n';
            break;
        default:

            printf("================================================================\n");
            printf("ERROR! No es una opcion valida.\n");
            printf("================================================================\n");
            break;
        }
    }
    while(opcion!=9);
    return 0;
}//Fin de main()
