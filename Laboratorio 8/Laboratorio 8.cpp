// Laboratorio 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

// Clase para determinar si un numero es primo
class Primo {
private:
    int numero;

public:
    Primo(int num) : numero(num) {}

    bool esPrimo() {
        if (numero <= 1) return false; // Los numeros menores o iguales a 1 no son primos
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) return false; // Si es divisible por algun numero, no es primo
        }
        return true; // Si no es divisible por ningun numero, es primo
    }
};

// Clase para calcular el factorial de un numero
class CalFactorial {
private:
    int numero;

public:
    CalFactorial(int num) : numero(num) {}

    int calcularFactorial() {
        int factorial = 1;
        for (int i = 1; i <= numero; i++) {
            factorial *= i; // Multiplica los numeros desde 1 hasta el numero dado
        }
        return factorial;
    }
};

// Clase para determinar si un estudiante aprueba o reprueba
class Estudiante {
private:
    int calificacion;

public:
    Estudiante(int cal) : calificacion(cal) {}

    string determinarResultado() {
        if (calificacion >= 60) {
            return "Aprueba"; // Si la calificacion es 60 o mas, aprueba
        }
        else {
            return "Reprueba"; // Si es menor a 60, reprueba
        }
    }
};

// Clase para verificar si un numero es natural
class NumNaturales {
private:
    int numero;

public:
    NumNaturales(int num) : numero(num) {}

    bool esNatural() {
        return numero >= 0; // Los numeros naturales son 0 o positivos
    }
};

// Clase para mostrar la tabla de multiplicar de un numero
class TablaMultiplicar {
private:
    int numero;

public:
    TablaMultiplicar(int num) : numero(num) {}

    void mostrarTabla() {
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl; // Muestra la tabla de multiplicar
        }
    }
};

// Clase para ordenar 5 numeros de menor a mayor
class OrdenarNumero {
private:
    int num1, num2, num3, num4, num5;

public:
    OrdenarNumero(int n1, int n2, int n3, int n4, int n5) : num1(n1), num2(n2), num3(n3), num4(n4), num5(n5) {}

    void ordenar() {
        // Algoritmo de ordenacion simple (burbuja)
        bool intercambiado;
        do {
            intercambiado = false;
            if (num1 > num2) { swap(num1, num2); intercambiado = true; }
            if (num2 > num3) { swap(num2, num3); intercambiado = true; }
            if (num3 > num4) { swap(num3, num4); intercambiado = true; }
            if (num4 > num5) { swap(num4, num5); intercambiado = true; }
        } while (intercambiado);

        cout << "Numeros ordenados: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << endl;
    }
};

// Funcion para mostrar el menu principal
void mostrarMenu() {
    cout << "\n--- Menu Principal ---" << endl;
    cout << "a. Primo: Determinar si un numero es primo" << endl;
    cout << "b. CalFactorial: Calcular el factorial de un numero" << endl;
    cout << "c. Estudiante: Determinar si un estudiante aprueba o reprueba" << endl;
    cout << "d. NumNaturales: Verificar si un numero es natural" << endl;
    cout << "e. TablaMultiplicar: Mostrar la tabla de multiplicar de un numero" << endl;
    cout << "f. OrdenarNumero: Ordenar 5 numeros de menor a mayor" << endl;
    cout << "s. Salir" << endl;
    cout << "Seleccione una opcion: ";
}

// Funcion principal
int main() {
    char opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 'a': {
            int num;
            cout << "\n--- Primo ---" << endl;
            cout << "Ingrese un numero para determinar si es primo: ";
            cin >> num;
            Primo primo(num);
            cout << (primo.esPrimo() ? "Es primo" : "No es primo") << endl;
            break;
        }
        case 'b': {
            int num;
            cout << "\n--- CalFactorial ---" << endl;
            cout << "Ingrese un numero para calcular su factorial: ";
            cin >> num;
            CalFactorial factorial(num);
            cout << "El factorial es: " << factorial.calcularFactorial() << endl;
            break;
        }
        case 'c': {
            int cal;
            cout << "\n--- Estudiante ---" << endl;
            cout << "Ingrese la calificacion del estudiante: ";
            cin >> cal;
            Estudiante estudiante(cal);
            cout << "El estudiante " << estudiante.determinarResultado() << endl;
            break;
        }
        case 'd': {
            int num;
            cout << "\n--- NumNaturales ---" << endl;
            cout << "Ingrese un numero para verificar si es natural: ";
            cin >> num;
            NumNaturales natural(num);
            cout << (natural.esNatural() ? "Es natural" : "No es natural") << endl;
            break;
        }
        case 'e': {
            int num;
            cout << "\n--- TablaMultiplicar ---" << endl;
            cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
            cin >> num;
            TablaMultiplicar tabla(num);
            tabla.mostrarTabla();
            break;
        }
        case 'f': {
            int n1, n2, n3, n4, n5;
            cout << "\n--- OrdenarNumero ---" << endl;
            cout << "Ingrese 5 numeros para ordenarlos: ";
            cin >> n1 >> n2 >> n3 >> n4 >> n5;
            OrdenarNumero ordenar(n1, n2, n3, n4, n5);
            ordenar.ordenar();
            break;
        }
        case 's': {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
        }
    } while (opcion != 's');

    return 0;
    //aqui termina
}