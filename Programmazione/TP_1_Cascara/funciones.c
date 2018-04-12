#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <curses.h>
#undef isnan

void CalcularTodo(int flag1,int flag2,float operando1, float operando2)
{
    int resultadoF;
    int entero;
    int Validacion = ValidarOperacion(flag1, flag2);
    if(Validacion == 1)
    {
        CalcularSuma(flag1,flag2,operando1, operando2);
        CalcularResta(flag1,flag2,operando1, operando2);
        CalcularDivision(flag1,flag2,operando1, operando2);
        CalcularMult(flag1,flag2,operando1, operando2);
        entero = esEntero(operando1);
        if (entero == 1)
        {
            resultadoF = CalcularFactorial(operando1);
            printf("================================================================\n");
            printf("El factorial de %.0f es: %d \n",operando1, resultadoF);
            printf("================================================================\n");
        }
        else
        {
            printf("================================================================\n");
            printf("Imposible realizar el factoreo. El valor ingresado no es un numero entero.\n");
            printf("================================================================\n");
        }
    }

}

float IngresarPrimerOperando()
{
    float operando1;            		//Declaro variable local
    printf("\nIngrese primer operando: ");	//Muestro consigna
//    scanf("%f",&operando1);    		//Leo numero
    operando1 = ValidarOperando(operando1);
    printf("\nNumero ingresado: %.2f\n\n",operando1); //Muestro numero
    return operando1;           //Retorno un float y guardo en var 							de main()
}

float IngresarSegundoOperando()
{
    float operando2;            //Declaro variable local
    printf("\nIngrese segundo operando: ");    //Muestro consigna
    scanf("%f",&operando2);     //Leo numero
    operando2 = ValidarOperando(operando2);
    printf("\nNumero ingresado: %.2f\n\n",operando2); //Muestro numero
    return operando2;           //Retorno un float y guardo en var 							de main()
}

void CalcularSuma(int flag1,int flag2,float operando1, float operando2)
{
    int Validacion = ValidarOperacion(flag1, flag2);
    if(Validacion == 1)
    {
        float suma = operando1 + operando2;
        printf("================================================================\n");
        printf("La suma de los dos operandos es: %.2f \n", suma);
        printf("================================================================\n");
        return;
    }
    return;
}

void CalcularResta(int flag1,int flag2,float operando1, float operando2)
{
    int Validacion = ValidarOperacion(flag1, flag2);
    if(Validacion == 1)
    {
        float resta = operando1 - operando2;
        printf("================================================================\n");
        printf("La diferencia de los dos operandos es: %.2f \n", resta);
        printf("================================================================\n");
        return;
    }
}

void CalcularDivision(int flag1,int flag2,float operando1, float operando2)
{
    int Validacion = ValidarOperacion(flag1, flag2);
    if(Validacion == 1)
    {
        if(operando2 == 0)
        {

            printf("No es posible dividir por 0 \n");
            return;
        }
        else
        {
            float division = operando1 / operando2;
            printf("================================================================\n");
            printf("El cociente de los dos operandos es: %.2f \n", division);
            printf("================================================================\n");
            return;
        }
    }

}

void CalcularMult(int flag1,int flag2,float operando1, float operando2)
{
    int Validacion = ValidarOperacion(flag1, flag2);
    if(Validacion == 1)
    {
        float producto = operando1 * operando2;
        printf("================================================================\n");
        printf("El producto  de los dos operandos es: %.2f \n", producto);
        printf("================================================================\n");
        return;
    }

}

int CalcularFactorial(float operando1)
{
    int resultado;

    if(operando1 == 0)
    {
        return 1;
    }
    else
    {
        resultado = operando1 * CalcularFactorial(operando1 - 1);
        return resultado;
    }
}

float ValidarOperando()
{
    float operando;
    scanf("%f",&operando);

    while(isnan(operando) != 0)
    {
        printf("Valor no valido. Reingrese: ");	//Muestro consigna
        clean_stdin();
        scanf("%f",&operando);
    }
    return operando;
}

int ValidarOperacion(int flag1, int flag2)
{
    if (flag1==flag2 && flag1==1)	//Si SÍ se ingresaron Op1 y Op2
    {
        return 1;	//Está todo bien
    }
    else
    {
        printf("================================================================\n");
        printf("Error. Falta ingresar un operando.\n");
        printf("================================================================\n");
        return 0;
    }

}
int esEntero(float operando)
{
    float comparacion1;
    float comparacion2;
    comparacion1 = (int)operando;

    comparacion2 = (float)comparacion1;
    if(comparacion2 == operando)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    }
    while (c != '\n' && c != EOF);
}
