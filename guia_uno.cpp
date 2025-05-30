#include <iostream>
using namespace std;

int main() {
    /*ejercicio 1
    std::cout << "Ingrese valor en milimetros: ";
    double milimetros;
    cin >> milimetros;
    double pulgadas = milimetros / 25.4;
    cout << "El valor en pulgadas es: "<< pulgadas << endl;
    return 0;
    */
   
    /*ejercicio 2
    enum DiaDeLaSemana {lunes =1, martes = 2, miercoles = 3, jueves = 4, viernes = 5, sabado = 6, domingo = 7};

    std::cout << "Ingrese un número del 1 al 7: ";
    int numero_semana;
    cin >> numero_semana;

    switch (numero_semana) {
        case lunes:
            cout << "El día es Lunes." << endl;
            break;
        case martes:
            cout << "El día es Martes." << endl;
            break;
        case miercoles:
            cout << "El día es Miércoles." << endl;
            break;
        case jueves:
            cout << "El día es Jueves." << endl;
            break;
        case viernes:
            cout << "El día es Viernes." << endl;
            break;
        case sabado:
            cout << "El día es Sábado." << endl;
            break;
        case domingo:
            cout << "El día es Domingo." << endl;
            break;
        default:
            cout << "Incorrecto. El número debe ser entre 1 y 7. Intenta de nuevo. " << endl;
    }

    return 0;
    */

    /*ejercicio 3
    std::cout << "Ingrese un valor numérico para la variable 'a': ";
    int a;
    cin >> a;
    std::cout << "Ingrese un valor numérico para la variable 'b': ";
    int b;
    cin >> b;
    cout << "El valor de la variable a es: " << a << " y el valor de la variable b es: " << b <<endl;
   
    a = a + b; //a = 1 y b = 4 => a = 5
    b = a - b; // a = 5 y b = 4 => b = 1
    a = a - b; // a = 5 y b = 1 => a = 4

    cout << "Ahora 'a' vale: " << a << " y 'b' vale: " << b << endl;
    return 0;
    */

    /*ejercicio 4 
    std::cout << "Ingrese un valor entero de bultos: "; 
    int bultos;
    cin >> bultos;
    std::cout << "Ingrese el valor de bultos que se pueden colocar en una caja: "; 
    int bultosxcaja;
    cin >> bultosxcaja;
    if (bultosxcaja == 0) {
        cout << "No se puede dividir por cero." << endl;
    } 
    else {
        int cajas = bultos / bultosxcaja; //cajas completas
        int bultossueltos = bultos % bultosxcaja; //bultos sueltos
        cout << "Cajas completas: " << cajas << endl;
        cout << "Bultos sueltos: " << bultossueltos << endl;
    }
    return 0;
    */

    /*ejercicio 5 
    std::cout << "Ingrese el valor del primer ángulo: ";
    double angulo_uno;
    cin >> angulo_uno;
    std::cout << "Ingrese el valor del segundo ángulo: ";
    double angulo_dos;
    cin >> angulo_dos;
    double angulo_tres = 180 - (angulo_uno + angulo_dos);
    if (angulo_tres <= 0) {
        cout << "Los ángulos ingresados no podrian formar un triángulo." << endl;
        return 0;
    }
    std::cout << "El valor del tercer ángulo es: " << angulo_tres << endl;
    return 0;
    */

    /*ejercico 6 
    std::cout << "Ingrese el valor del lado del cuadrado: ";
    double lado;
    cin >> lado;
    double perimetro = 4 * lado;
    double superficie = lado * lado;
    cout << "El perímetro del cuadrado es: " << perimetro << "cm" << endl;
    cout << "La superficie del cuadrado es: " << superficie << "cm2" << endl;
    return 0;
    */

    /*ejercicio 7 
    std::cout << "Ingrese dos valores: ";
    int valor_uno;
    int valor_dos;
    cin >> valor_uno >> valor_dos; 

    if (valor_uno > valor_dos) {
        cout << "El mayor es " << valor_uno << endl;
    } else if (valor_dos > valor_uno) {
        cout << "El mayor es " << valor_dos << endl;
    } else {
        cout << "Ambos valores son iguales: " << valor_uno << endl;
    }
    return 0;
    */

    /*ejercicio 8 
    std::cout << "Ingrese la medida de un lado del triangulo: ";
    double lado_uno;
    cin >> lado_uno;
    std::cout << "Ingrese la medida de otro lado: ";
    double lado_dos;
    cin>> lado_dos;
    std::cout << "Ingrese la medida del tercer lado: ";
    double lado_tres;
    cin >> lado_tres;
    if (lado_uno == lado_dos) {
        if (lado_dos == lado_tres) {
            cout << "El triángulo es equilátero." << endl;
        } else {
            cout << "El triángulo es Isoseles, con el tercer lado distinto." << endl;
        }

    } else if (lado_dos != lado_tres) {
        if (lado_uno == lado_tres){
            std::cout << "El triángulo es Isoseles, con el segundo lado distinto." << endl;
        } else {
            std::cout << "El triángulo es escaleno." << endl;
        }
        
    } else {
        cout << "El triángulo es isoseles, con el primer lado distinto." << endl;
    }
    return 0;
    */

    /*ejercicio 9
    std::cout << "Ingrese un valor: ";
    double valor_uno;
    cin >> valor_uno;
    std::cout << "Ingrese otro valor: ";
    double valor_dos;
    cin >> valor_dos;
    std::cout << "Ingrese un ultimo valor: ";
    double valor_tres;
    cin >> valor_tres;
    
    if (valor_uno >= valor_dos) {
        if(valor_tres >= valor_uno){
            std::cout << "Los valores son " << valor_tres << " > " << valor_uno <<  " > " << valor_dos << endl;
        }
        else if(valor_uno >= valor_tres && valor_tres >= valor_dos){
            std::cout << "Los valores son " << valor_uno << " > " << valor_tres<<  " > " << valor_dos << endl;
        }
        else{
            std::cout << "Los valores son " << valor_uno << " > " << valor_dos<<  " > " << valor_tres << endl;
        }
    }

    else {
        if (valor_tres >= valor_dos){
            std::cout << "Los valores son " << valor_tres << " > " << valor_dos <<  " > " << valor_uno << endl;
        }
        else if(valor_dos >= valor_tres && valor_tres >= valor_uno){
            std::cout << "Los valores son " << valor_dos << " > " << valor_tres<<  " > " << valor_uno << endl;
        }
        else{
            std::cout << "Los valores son " << valor_dos << " > " << valor_uno<<  " > " << valor_tres << endl;
        }
        
    }
    return 0;
    */

    /*ejercicio 10 */
}


    