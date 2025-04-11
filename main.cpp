#include <iostream>
#include <string>
using namespace std;

//Arturo Valladolid | U202420147

class Estudiante {
private:
    //Atributos
    string nombre;
    string codigo;
    int edad;
    string carrera;
    int ciclo;
public:
    //Constructores
    Estudiante() = default;
    Estudiante(string& Nombre, string& Codigo, string& Carrera) : nombre{Nombre}, codigo{Codigo}, carrera{Carrera}, edad{0}, ciclo{0} {};
    Estudiante(string& Nombre, string& Codigo, int Edad, string& Carrera, int Ciclo) : nombre{Nombre}, codigo{Codigo}, edad{Edad}, carrera{Carrera}, ciclo{Ciclo} {};
    //Destructor
    ~Estudiante() {};
    //Setter y Getter
    void setNombre(string& Nombre) {
        this->nombre = Nombre;
    };
    string getNombre() {
        return nombre;
    };
    void setCodigo(string& Codigo) {
        this->codigo = Codigo;
    };
    string getCodigo() {
        return codigo;
    };
    void setEdad(int Edad) {
        this->edad = Edad;
    };
    int getEdad() {
        return edad;
    };
    void setCarrera(string& Carrera) {
        this->carrera = Carrera;
    };
    string getCarrera() {
        return carrera;
    };
    void setCiclo(int Ciclo) {
        this->ciclo = Ciclo;
    };
    int getCiclo() {
        return ciclo;
    };
    //toString
    string toString() {
        string valor = "Nombre del estudiante: " + nombre +
                       ", Su código: " + codigo +
                       ", Su edad es: " + to_string(edad) + " años" +
                       ", Estudiante de la carrera: " + carrera +
                       ", Actualmente en el ciclo: " + to_string(ciclo);
        return valor;
    }

};

int main() {
    string nombre, codigo, carrera;
    int edad, ciclo;

    cout << "Estudiante 1" << endl;
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, nombre);
    cout << "Ingrese el código: ";
    getline(cin, codigo);
    cout << "Ingrese la carrera que estudia: ";
    getline(cin, carrera);
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Ingrese el ciclo actual: ";
    cin >> ciclo;
    cin.ignore(); //No me dejaba colocar el nombre2 sin esto.

    auto estudiante1 = new Estudiante(nombre, codigo, edad, carrera, ciclo);

    //Estudiante 2
    string nombre2, codigo2, carrera2;
    int edad2, ciclo2;

    cout << "\nEstudiante 2" << endl;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre2);
    cout << "Ingrese el código: ";
    getline(cin, codigo2);
    cout << "Ingrese la carrera: ";
    getline(cin, carrera2);
    cout << "Ingrese la edad: ";
    cin >> edad2;
    cout << "Ingrese el ciclo: ";
    cin >> ciclo2;

    auto estudiante2 = new Estudiante(nombre2, codigo2, edad2, carrera2, ciclo2);

    cout << "\nDatos del Estudiante 1:" << endl;
    cout << estudiante1->toString() << endl;
    cout << "Datos del Estudiante 2:" << endl;
    cout << estudiante2->toString() << endl;

    return 0;
}
