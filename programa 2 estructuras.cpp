 #include <iostream>
using namespace std;

struct Estudiante {
    int id;
    string nombres;
    string apellidos;
    float notas[4];
};

int main() {
    int num_estudiantes;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> num_estudiantes;

   
    Estudiante *estudiantes = new Estudiante[num_estudiantes];

   
    for (int i = 0; i < num_estudiantes; i++) {
        cout << "Ingrese los datos del estudiante " << i+1 << ":" << endl;
        cout << "ID: ";
        cin >> estudiantes[i].id;
        cout << "Nombres: ";
        cin >> estudiantes[i].nombres;
        cout << "Apellidos: ";
        cin >> estudiantes[i].apellidos;
        for (int j = 0; j < 4; j++) {
            cout << "Nota " << j+1 << ": ";
            cin >> estudiantes[i].notas[j];
        }
        cout << endl;
    }

    
    for (int i = 0; i < num_estudiantes; i++) {
        float promedio = (estudiantes[i].notas[0] + estudiantes[i].notas[1] + estudiantes[i].notas[2] + estudiantes[i].notas[3]) / 4;
        cout << "Estudiante " << i+1 << ": " << estudiantes[i].nombres << " " << estudiantes[i].apellidos << endl;
        cout << "ID: " << estudiantes[i].id << endl;
        cout << "Promedio: " << promedio << endl;
        if (promedio >= 60) {
            cout << "Estado: Aprobado" << endl;
        } else {
            cout << "Estado: Reprobado" << endl;
        }
        cout << endl;
    }

   
    delete[] estudiantes;

    return 0;
}
