#include <iostream>

using namespace std;

int suma_de_caracteres_enteros(int numero_1, int numero_2, int& operacion_1);
float suma_de_numeros_decimales(float numero_3, float numero_4, float& operacion_2);
void mostrar_datos_en_pantalla();

int main() {
    int numero_1 = 0;
    int numero_2 = 0;
    int operacion_1 = 0;

    float numero_3 = 0;
    float numero_4 = 0;
    float operacion_2 = 0;

    mostrar_datos_en_pantalla();
    
    int resultado_1 = suma_de_caracteres_enteros(numero_1, numero_2, operacion_1);
    cout << "El resultado de la operacion de numeros enteros es: " << resultado_1 << endl;

    float resultado_2 = suma_de_numeros_decimales(numero_3, numero_4, operacion_2);  
    cout << "El resulatdo de la operacion de numeros decimales es: " << resultado_2 << endl;

    return 0;
}

int suma_de_caracteres_enteros(int numero_1, int numero_2, int& operacion_1) 
{
    cout << "Introduce el primer numero que deseas sumar: " << endl;
    cin >> numero_1;

    cout << "Introduce el segundo numero que deseas sumar: " << endl;
    cin >> numero_2;

    operacion_1 = numero_1 + numero_2;

    return operacion_1;
}

float suma_de_numeros_decimales(float numero_3, float numero_4, float& operacion_2)
{
    cout << "Introduce el primer valor que deseas sumar: " << endl;
    cin >> numero_3;

    cout << "Introduce el segundo valor que deseas sumar:  " << endl;
    cin >> numero_4;

    operacion_2 = numero_3 + numero_4;

    return operacion_2;
}

void mostrar_datos_en_pantalla()
{
    string mi_nombre = {};
    char mi_mascota[20] = {};

    cout << "Introduce tu nombre: " << endl;
    getline (cin, mi_nombre);  // getLine para capturar espacios en blancos a mi string para manejar cadena de texto.

    cout << "Introduce el nombre de tu mascota: " << endl;
    cin >> mi_mascota; 

    cout << "Hola mi nombre es " << mi_nombre << " y mi mascota se llama " << mi_mascota << endl;

}