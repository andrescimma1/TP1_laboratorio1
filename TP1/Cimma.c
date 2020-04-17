/** \brief Suma dos numeros y devuelve el resultado.
 *
 * \param int num1, num2 (Números ingresados)
 * \param
 * \return Retorna el resultado de num1 + num2
 *
 */
int Sumar(int num1, int num2)
{
    int resultado;
    resultado = num1 + num2;
    return resultado;
}


/** \brief Resta dos numeros y devuelve el resultado.
 *
 * \param int num1, num2 (Números ingresados)
 * \param
 * \return Retorna el resultado de num1 - num2
 *
 */
int Restar(int num1, int num2)
{
    int resultado;
    resultado = num1 - num2;
    return resultado;
}


/** \brief Divide dos numeros y devuelve el resultado.
 *
 * \param int num1, num2 (Números ingresados)
 * \param
 * \return Retorna el resultado de num1 / num2
 *
 */
int Dividir(int num1, int num2)
{
    float resultado = 0;
    resultado = num1 / num2;
    return resultado;
}


/** \brief Multiplica dos numeros y devuelve el resultado.
 *
 * \param int num1, num2 (Números ingresados)
 * \param
 * \return Retorna el resultado de num1 * num2
 *
 */
int Multiplicar(int num1, int num2)
{
    int resultado;
    resultado = num1 * num2;
    return resultado;
}


/** \brief Calcula el factorial de num1 y lo devuelve.
 *
 * \param int num1 (Número ingresado)
 * \param
 * \return Retorna el factorial de num1.
 *
 */
int Factorial1(int num1)  //Función factorial para el caso de A
{
    int factorial = 1;
    int i;

    for(i = 1; i <= num1; i++)
    {                               // f * i = f * i = f * i = f * i = f  * i = f
        factorial = factorial * i;  // 1 * 1 = 1 * 2 = 2 * 3 = 6 * 4 = 24 * 5 = 120 ....
    }
    return factorial;
}


/** \brief Calcula el factorial de num2 y lo devuelve.
 *
 * \param int num2 (Número ingresado)
 * \param
 * \return Retorna el factorial de num2.
 *
 */
int Factorial2(int num2)  //Repito la función para el caso de B
{
    int factorial = 1;
    int i;

    for(i = 1; i <= num2; i++)
    {                               // f * i = f * i = f * i = f * i = f  * i = f
        factorial = factorial * i;  // 1 * 1 = 1 * 2 = 2 * 3 = 6 * 4 = 24 * 5 = 120 ....
    }
    return factorial;
}
