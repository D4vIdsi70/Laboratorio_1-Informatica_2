/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int contarCaminos(int n);

int main(){
    
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int numCaminos = contarCaminos(n);
    cout << "Para una malla de " << n << "x" << n << " puntos hay " << numCaminos << " caminos" << endl;
 
    return 0;
}

int contarCaminos(int n){
    int dp[100][100];

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i <= n; ++i) {
        dp[0][i] = 1;
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[n][n];
}
