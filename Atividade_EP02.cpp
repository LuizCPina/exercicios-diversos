#include <iostream>
#include <cmath>
using namespace std;

int main() {
	 setlocale(LC_ALL, "Portuguese");
    // Precisão requerida
    double precision = 0.001;

    // Variáveis para armazenar x, y, z
    double x = 0, y = 0, z = 0;
    double x_new, y_new, z_new;
    int iter = 0;
    
    while (true) {
        iter++;

        // Atualizando valores de x, y, z com base nas fórmulas isoladas
        x_new = (-2 + y - 2*z) / 2;
        y_new = (-1 - x_new - z) / 2;
        z_new = (1 + 2*x_new + y_new) / -3;

        // Verificar se a precisão foi atingida
        if (fabs(x_new - x) < precision && fabs(y_new - y) < precision && fabs(z_new - z) < precision)
            break;

        // Atualizando os valores para a próxima iteração
        x = x_new;
        y = y_new;
        z = z_new;

        // Exibir a solução aproximada em cada iteração (opcional)
        cout << "Iteração " << iter << ": x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    // Exibir a solução final
    cout << "\nSolução final: " << endl;
    cout << "x = " << x_new << ", y = " << y_new << ", z = " << z_new << endl;
    cout << "Número de iterações: " << iter << endl;

    return 0;
}