/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int a = n;

    string numeros = "0123456789";
    bool usado[10] = {false};
    string resultado = "";

    n--; 
    
    for (int i = 9; i >= 0; i--) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }

        int indice = n / fact;
        int contador = 0;
        for (int j = 0; j < 10; j++) {
            if (!usado[j]) {
                if (contador == indice) {
                    resultado += (char)(j + '0');
                    usado[j] = true;
                    break;
                }
                contador++;
            }
        }

        n %= fact;
    }

    cout << "La permutación número " << a << " es: " << resultado << "." << endl;

    return 0;
}