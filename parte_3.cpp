#include <bits/stdc++.h>
using namespace std;

struct Estudiante {
    string nombre;
    int anio;
    double gpa;
};

const int ANIO_ACTUAL = 2026;

int main() {
    array<Estudiante, 10> e = {{{"Juan", 2000, 3.4}, {"Maria", 2005, 2.8}}};

    for (int i = 2; i < 4; i++) {
        cout << "Estudiante " << i + 1 << " (nombre anio gpa): ";
        cin >> e[i].nombre >> e[i].anio >> e[i].gpa;
    }

    string nombres[] = {"Gaby", "Patty", "Diana"};
    int nacimientos[] = {2002, 2004, 2006};
    double gpas[] = {3.8, 3.0, 2.9};
    for (int i = 0; i < 2; i++)
        e[4 + i] = {nombres[i], nacimientos[i], gpas[i]};

    ifstream archivo("datos.txt");
    int pos = 6;
    while (pos < 10 && archivo >> e[pos].nombre >> e[pos].anio >> e[pos].gpa)
        pos++;

    cout << "\nd) Estudiantes registrados:\n";
    int n = 1;
    for (const Estudiante& s : e)
        cout << n++ << ". " << s.nombre << " | edad: " << ANIO_ACTUAL - s.anio
             << " | GPA: " << fixed << setprecision(1) << s.gpa
             << " | beca: " << (s.gpa >= 3.5 ? "SI" : "NO") << "\n";

    return 0;
}
