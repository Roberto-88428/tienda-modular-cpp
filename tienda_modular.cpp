¡Esa es!

Dale a *Crear archivo*.

Ahí te va a pedir el nombre y el contenido. Haz esto:

*1. En nombre pon:*
`tienda_modular.cpp`

*2. En el cuadro grande pega este código:*
#include <iostream>
using namespace std;

double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}

double calcularDescuento(double subtotal) {
    if (subtotal > 100000) {
        return subtotal * 0.10;
    } else {
        return 0;
    }
}

double calcularTotal(double subtotal, double descuento) {
    return subtotal - descuento;
}

int main() {
    double precio;
    int cantidad;

    cout << "Ingrese el precio unitario: ";
    cin >> precio;
    cout << "Ingrese la cantidad de unidades: ";
    cin >> cantidad;

    if (precio < 0 || cantidad < 0) {
        cout << "Datos invalidos" << endl;
        return 0;
    }

    double subtotal = calcularSubtotal(precio, cantidad);
    double descuento = calcularDescuento(subtotal);
    double total = calcularTotal(subtotal, descuento);

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
