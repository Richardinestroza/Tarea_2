#include "Evaluador.h"
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;//Devuelve el valor del apuntador dado *ptr
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;//En esta operación devuelve el valor de la suma de los apuntadores
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b)//en esta colocamos una condicion para comparar los apuntadores
    {
    return true;//devuelve a true si ambos apuntan al mismo espacio de memoria
    }
    return false;//devuelve a false si alguno de ellos no apunta al mismo espacio de memoria
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b)//colocamos una condicion if para comparar los valores de los apuntadores
    {
    return true;//devuelve true si ambos son iguales
    }
    return false;//Devuelve false si alguno de los valores es diferente

}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    //colocamos el comando at que nos permitira visualizar u obtener lo que es la primera letra
    // se crea la variable char "letra" y le asignamos una variable a y con el comando at (0) lo colocamos
    //indicando que tome la primera letra
    char letra =a->at(0);

     //luego solo retornamos el resultado de la variable "letra"
    return letra;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{

    return true;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int respuesta;//se crea una variable int para guardar resultado
    respuesta=pow(*base,*exponente);//respuesta es igual a realizar operacion con exponente el elemento pow
    //esta dentro de la libreria math.h se la agrego en la parte de arriba y dentro de los parentesis
    //mando a llamar a basey exponente

    return respuesta;//devuelve respuesta
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
