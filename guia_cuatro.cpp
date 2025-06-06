#include <iostream>
#include <iomanip>
#include <cassert>
#include <fstream>
using namespace std;

const int dim_cero = 5;
const int dim_uno = 10;
const int dim_dos = 7;

double promedio(double vec[], int parametro) {
    double suma {0};
    int contador {0};
    
    for (int i = 0; i < dim_dos; ++i) {
        
        if (vec[i] > parametro) { 
        suma += vec[i];
        contador++;
        }
        else{
            cout<<"No hay valores mayores al parámetro ingresado."<<endl;
        } 
    }
    
    return suma / contador;
    }



int main() {
    
    /* ejercicio 0
    Armar un vector de dimension 5, que reciba los elementos que se quieran 
    int v[dim_cero];
    for (int i = 0; i < dim_cero; ++i) {
    cout << "Ingrese el elemento " << i << ": ";
    cin >> v[i];
    }
    cout << "--------" << endl;
    cout << "Los elementos ingresados son:" << endl;
    for (int i = 0; i < dim_cero; ++i)
    cout << "v[" << i << "]= " << v[i] << endl;
    return 0;
    */
    
    
    /* ejercicio 1
    Armar un vector con 10 valores enteros en la inicialización. Hallar la sumatoria de los valores.
Si prueba con los pares comenzando en 2, la suma debe dar 110
    int vector[dim_uno] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int sumatoria = 0;
    for (int i = 0; i < dim_uno; ++i) {
        sumatoria += vector[i];
    }
    cout << "La sumatoria de los valores es: " << sumatoria << endl;
    
    return 0;
    */

    /*ejercicio 2
    Dado un vector de double, armar una función que devuelva el promedio de aquellos valores
que superen una determinado parámetro (que se pasará a la función).
Reflexione sobre que puede hacer cuando ningún valor supera el parámetro dado.
Si usa el archivo datos02.txt el vector debe tener 7 elementos y estos son algunas resultados:*/
    ifstream archilec; 
    archilec.open("datos02.txt");
    if (!archilec) {
    cout << "Error al abrir el archivo" << endl;
    return 1;
    }
    cout << "Leyendo Archivo" << endl;
    float numero;
    
    double vec[dim_dos];
    for (int i = 0; i < dim_dos; ++i) {
        if (archilec >> numero) {
            vec[i] = numero;
        } 
        else {
            cout << "Archivo sin datos float" << endl;
            return 1;
        }
    }

    int parametro;
    cout << "Ingrese el parámetro para calcular el promedio: ";
    cin >> parametro;

    cout << "El promedio es: " << promedio(vec, parametro) << endl;
    archilec.close();
    return 0;
}