#include <iostream>
#include <vector>
using namespace std;

struct Persona {
    char SEXO; 
    int EDAD;
};

int main() {
    vector<Persona> PERSONAS(50);

    // Variables 
    int mayoresEdad = 0;
    int menoresEdad = 0;
    int masculinosMayores = 0;
    int femeninasMenores = 0;
    int totalMujeres = 0;


    // Leer los datos de las 50 personas
    for (int i = 0; i < 10; i++) {
        cout << "LEER PERSONA " << i + 1 << endl;
        cout << "Ingrese el sexo (M/F): ";
        cin >> PERSONAS[i].SEXO;
        cout << "Ingrese la edad: ";
        cin >> PERSONAS[i].EDAD;
    }

    // Clasificación 
    for (int i = 0; i < 10; i++) {
        //Mayores de edad (a)
        if (PERSONAS[i].EDAD >= 18) {
            mayoresEdad++;
            //Hombres mayores de edad (c)
            if (PERSONAS[i].SEXO == 'M' || PERSONAS[i].SEXO == 'm') {
                masculinosMayores++;
            }
        
        //Menores de edad (b)
        } else {
            menoresEdad++;
            //Mujeres menores de edad(d)
            if (PERSONAS[i].SEXO == 'F' || PERSONAS[i].SEXO == 'f') {
                femeninasMenores++;
            }
        }

        // Contar la cantidad de mujeres (f) Calculo previo necesario para hayar el porcentaje de mujeres sobre el total
        if (PERSONAS[i].SEXO == 'F' || PERSONAS[i].SEXO == 'f') {
            totalMujeres++;
        }
    }

    // Calcular porcentajes: Casos Favorables / Casos Totales * 100
    //Porcentaje mayores de edad (e)
    double porcentajeMayoresEdad = (mayoresEdad / 10.0) * 100;
    //Porcentaje de mujeres (f)
    double porcentajeMujeres = (totalMujeres / 10.0) * 100;

    //Imprimimos los resultados obtenidos
    cout << "Resultados:" << "\n";
    cout << "a. Cantidad de personas mayores de edad: " << mayoresEdad <<  "\n";
    cout << "b. Cantidad de personas menores de edad: " << menoresEdad <<  "\n";
    cout << "c. Cantidad de personas masculinas mayores de edad: " << masculinosMayores <<  "\n";
    cout << "d. Cantidad de personas femeninas menores de edad: " << femeninasMenores <<  "\n";
    cout << "e. Porcentaje de personas mayores de edad respecto al total: " << porcentajeMayoresEdad << " %" <<  "\n";
    cout << "f. Porcentaje de mujeres respecto al total de personas: " << porcentajeMujeres << " %" <<  "\n";

    return 0;
}
