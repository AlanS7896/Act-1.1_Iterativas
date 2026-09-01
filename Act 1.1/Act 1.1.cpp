#include <iostream>
#include "Calculos.h";

    int main() {
        // Caso 1: Esperado: 1
        std::cout << "Caso 1 (n = 1)" << std::endl;
        std::cout << "Esperado: 1" << std::endl;
        std::cout << "Iterativa:" << Calculos::sumaIterativa(1) << std::endl;
        std::cout << "Recursiva:" << Calculos::sumaRecursiva(1) << std::endl;
        std::cout << "Directa:" << Calculos::sumaDirecta(1) << "\n";

        // Caso 2: Esperado: 15
        std::cout << "Caso 2 (n = 5)" << std::endl;
        std::cout << "Esperado:15" << std::endl;
        std::cout << "Iterativa:" << Calculos::sumaIterativa(5) << std::endl;
        std::cout << "Recursiva:" << Calculos::sumaRecursiva(5) << std::endl;
        std::cout << "Directa:" << Calculos::sumaDirecta(5) << "\n";

        // Caso 3: Esperado: 210
        std::cout << "Caso 3 (n = 20)" << std::endl;
        std::cout << "Esperado:210" << std::endl;
        std::cout << "Iterativa:" << Calculos::sumaIterativa(20) << std::endl;
        std::cout << "Recursiva:" << Calculos::sumaRecursiva(20) << std::endl;
        std::cout << "Directa:" << Calculos::sumaDirecta(20) << "\n";

        // Caso 4:  Esperado: 5050
        std::cout << "Caso 4 (n = 100)" << std::endl;
        std::cout << "Esperado:5050" << std::endl;
        std::cout << "Iterativa:" << Calculos::sumaIterativa(100) << std::endl;
        std::cout << "Recursiva:" << Calculos::sumaRecursiva(100) << std::endl;
        std::cout << "Directa:" << Calculos::sumaDirecta(100) << "\n";

        return 0;
    }
