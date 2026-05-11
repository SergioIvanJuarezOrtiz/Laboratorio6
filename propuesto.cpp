#include <iostream>
using namespace std;

int main()
{

    int materia, nota1, nota2, nota3;
    cout << " Programa para simular un sistema de notas ";
    cout << " 1=(matematica)2=(programacion)3=(fisica)" << endl;
    cout << "Ingrese el numero de la materia: ";
    cin >> materia;

    switch (materia)
    {
    case 1:
        cout << "Materia: Matematica" << endl;
        cout << "Ingrese la nota del estudiante (0-100): ";
        cout << "nota1:";
        cin >> nota1;
        cout << "nota2:";
        cin >> nota2;
        cout << "nota3:";
        cin >> nota3;
        double promedio = (nota1 + nota2 + nota3) / 3;
        cout << "Promedio: " << promedio << endl;
        if (promedio >= 60)
        {
            cout << "Calificacion: Aprobado" << endl;
        }
        else
        {
            cout << "Calificacion: Reprobado" << endl;
        }

        break;
    case 2:
        cout << "Materia: Programacion" << endl;
            cout << "Ingrese la nota del estudiante (0-100): ";
        cout << "nota1:";
        cin >> nota1;
        cout << "nota2:";
        cin >> nota2;
        cout << "nota3:";
        cin >> nota3;
        double promedio2 = (nota1 + nota2 + nota3) / 3;
        cout << "Promedio: " << promedio2 << endl;
        if (promedio2 >= 60)
        {
            cout << "Calificacion: Aprobado" << endl;
        }
        else
        {
            cout << "Calificacion: Reprobado" << endl;
        }

        break;
    case 3:
        cout << "Materia: Fisica" << endl;
        cout << "Ingrese la nota del estudiante (0-100): ";
        cout << "nota1:";
        cin >> nota1;
        cout << "nota2:";
        cin >> nota2;
        cout << "nota3:";
        cin >> nota3;
        double promedio3 = (nota1 + nota2 + nota3) / 3;
        cout << "Promedio: " << promedio3 << endl;
        if (promedio3 >= 60)
        {
            cout << "Calificacion: Aprobado" << endl;
        }
        else
        {
            cout << "Calificacion: Reprobado" << endl;
        }
        break;
    default:
        cout << "Materia invalida. Por favor ingrese un numero entre 1 y 3." << endl;
    }
    return 0;
}
