// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty())
    {
        if(mi_cola.front()%2 == 0 )
            return true;

        else
            return false;
    }
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    while(!mi_lista.empty())
    {
        if(mi_lista.front() %2 == 0)
            return true;

        else
            return false;
    }
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty())
    {
        if(mi_cola.front() == str ){
            return true;
        }
    mi_cola.pop();
    }
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())
    {
        if(mi_lista.front() == str){
            return true;
        }
    mi_lista.pop_front();
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int acumulador=0;
    while(!mi_cola.empty())
    {
        int almacen=mi_cola.front();
        acumulador=acumulador+almacen;
        mi_cola.pop();
    }
    return acumulador;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int contador=0;
    while(!mi_lista.empty())
    {
        string almacen=mi_lista.front();
        contador=contador+almacen.length();
        mi_lista.pop_front();
    }
    return contador;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
    while(mi_lista.empty())
        {
        if(isalpha(mi_lista.front()))
            {
        return true;

        mi_lista.pop_front();
        }
    else
        {
        return false;
        }
    }
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
