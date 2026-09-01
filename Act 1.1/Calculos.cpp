#include "Calculos.h"

int Calculos::sumaIterativa(int n)
{
    int valor = 0;
    for (int i = 1; i <= n; i++) {
        valor += i;
    }

    return valor;
}
// Esta funcion es de complejidad de O(n) porque depende de n veces que pongamos la funcion

int Calculos::sumaRecursiva(int n)
{
    if (n <= 1) {
        return n;
    }

    else {
        return n + sumaRecursiva(n - 1);
    }
}
// Esta funcion es de complejidad de O(n) porque depende de n veces que pongamos la funcion


int Calculos::sumaDirecta(int n)
{
    return (n*(n+1))/2;
}
//Esta funcion es de complejidad O(1) porque solo se llama una vez con formula directa