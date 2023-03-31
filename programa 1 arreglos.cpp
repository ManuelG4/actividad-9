#include <iostream>
using namespace std;

int main() {
    int num_estudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> num_estudiantes;

    
    int id[num_estudiantes];
    string nombres[num_estudiantes];
    string apellidos[num_estudiantes];
    float notas[num_estudiantes][4];
    
    
    for (int i = 0; i < num_estudiantes; i++) {
        cout << "Ingrese los datos del estudiante " << i+1 << ":" << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Nombres: ";
        cin >> nombres[i];
        cout << "Apellidos: ";
        cin >> apellidos[i];
        for (int j = 0; j < 4; j++) {
            cout << "Nota " << j+1 << ": ";
            cin >> notas[i][j];
        }
        cout << endl;
    }

    
    for (int i = 0; i < num_estudiantes; i++) {
        float promedio = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4;
        cout << "Estudiante " << i+1 << ": " << nombres[i] << " " << apellidos[i] << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Promedio: " << promedio << endl;
        if (promedio >= 60) {
            cout << "Estado: Aprobado" << endl;
        } else {
            cout << "Estado: Reprobado" << endl;
        }
        cout << endl;
    }

    return 0;
}
