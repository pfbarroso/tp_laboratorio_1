#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif // FUNCIONES_H_INCLUDED

float IngresarPrimerOperando();
/** \brief Solicita primer valor para operar
 *
 * \param
 * \param
 * \param
 * \return  Devuelve el 1er operando ingresado después de ser validado
 *
 */
float IngresarSegundoOperando();
/** \brief Solicita segundo valor para operar
 *
 * \return  Devuelve el 2do operando ingresado después de ser validado
 *
 */
void CalcularSuma(int flag1,int flag2,float operando1, float operando2);
/** \brief Suma de los dos valores ingresados
 *
 * \param Flag que indica que el operando 1 FUE ingresado y se ingresó correctamente
 * \param Flag que indica que el operando 2 FUE ingresado y se ingresó correctamente
 * \param Operando 1
 * \param Operando 2
 *
 */
void CalcularResta(int flag1,int flag2,float operando1, float operando2);
/** \brief Resta de los dos valores ingresados
 *
 * \param Flag que indica que el operando 1 FUE ingresado y se ingresó correctamente
 * \param Flag que indica que el operando 2 FUE ingresado y se ingresó correctamente
 * \param Operando 1
 * \param Operando 2
 *
 */
void CalcularDivision(int flag1,int flag2,float operando1, float operando2);
/** \brief Cociente de los dos valores ingresados
 *
 * \param Flag que indica que el operando 1 FUE ingresado y se ingresó correctamente
 * \param Flag que indica que el operando 2 FUE ingresado y se ingresó correctamente
 * \param Operando 1
 * \param Operando 2
 *
 */
void CalcularMult(int flag1,int flag2,float operando1, float operando2);
/** \brief Producto de los dos valores ingresados
 *
 * \param Flag que indica que el operando 1 FUE ingresado y se ingresó correctamente
 * \param Flag que indica que el operando 2 FUE ingresado y se ingresó correctamente
 * \param Operando 1
 * \param Operando 2
 *
 */
float ValidarOperando();
/** \brief Analiza si el operando es número o no. Si no lo es, vuelve a pedir
 *
 * \param Operando

 * \return Operando validado
 */
int ValidarOperacion(int,int);
/** \brief Analiza si el operando es número o no. Si no lo es, vuelve a pedir
 *
 * \param Flag 1
 * \param Flag 2
 * \return Devuelve un 1 (Verdadero) si los operandos han sido ingresados y
            0 (Falso) si faltan ingresar datos
 */
int CalcularFactorial(float);
/** \brief Realiza la operación de Factoreo de manera recursiva desde Operando hasta 0
 *
 * \param float Operando1
 * \return Factorial de Operando1
 */


void CalcularTodo(int, int, float, float);
/** \brief Realiza todas las operaciones si los valores son correctos.
 *
 * \param int Flag1
 * \param int Flag 2
 * \param float Operando1
 * \param float Operando2

 */


int esEntero(float);
void clean_stdin(void);
