#include <iostream>
using namespace std;

int main() {
    // Variables para almacenar las horas trabajadas y la tarifa por hora
    int HORASTRABAJADAS;
    double TARIFA;
    double sueldo;

    // Leer las horas trabajadas y la tarifa
    cout << "LEER HORAS TRABAJADAS: ";
    cin >> HORASTRABAJADAS;
    cout << "LEER TARIFA: ";
    cin >> TARIFA;

    // Calcular el sueldo basado sin contar el aumento recibido en caso de horas extra
    sueldo = HORASTRABAJADAS * TARIFA;

    
   
    //Comprobamos si se han realizado horas extra
    if (HORASTRABAJADAS > 40) {
        //Calculamos el numero de horas extra
        int horasExtra = HORASTRABAJADAS - 40;

        //El extra que recibe el trabajador por cada Hora extra
        double extraPorHora = TARIFA/2;

        //Se le suma lo recibido por las horas extra
        sueldo += horasExtra * extraPorHora;
    }

    // Mostrar el sueldo calculado
    cout << "Sueldo: " << sueldo << "€" << "\n";

    return 0;
}