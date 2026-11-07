#include <iostream>
using namespace std;

double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}

double calcularDescuento(double subtotal) {
    if (subtotal > 100000) {
        return subtotal * 0.10;
    }
    return 0;
}

double calcularTotal(double subtotal, double descuento) {
    return subtotal - descuento;
}

void mostrarMenu() {
    cout << "=== TIENDA MODULAR ===" << endl;
    cout << "1. Hacer una compra" << endl;
    cout << "2. Salir" << endl;
}

int main() {
    int opcion;
    double precio;
    int cantidad;

    do {
        mostrarMenu();
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Precio del producto: ";
            cin >> precio;
            cout << "Cantidad: ";
            cin >> cantidad;

            double subtotal = calcularSubtotal(precio, cantidad);
            double descuento = calcularDescuento(subtotal);
            double total = calcularTotal(subtotal, descuento);

            cout << "Subtotal: " << subtotal << endl;
            cout << "Descuento: " << descuento << endl;
            cout << "Total a pagar: " << total << endl;
        }

    } while (opcion != 2);

    cout << "Gracias por comprar!" << endl;
    return 0;
}