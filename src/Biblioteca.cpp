#include "Biblioteca.h"
#include <iostream>
#include <cctype>
using namespace std;

Biblioteca::Biblioteca() {}

//Destructor
Biblioteca::~Biblioteca() {
    for (auto& u : usuarios) delete u;
    for (auto& b : bibliotecarios) delete b;
    for (auto& l : libros) delete l;
}

bool Biblioteca::soloNumeros(string str) {
    for (char c : str) if (!isdigit(c)) return false;
    return !str.empty();
}

Usuario* Biblioteca::buscarUsuario(string codigo) {
    for (auto& u : usuarios) 
        if (u->getCodigoUsuario() == codigo) return u;
    return nullptr;
}

Libro* Biblioteca::buscarLibro(string codigo) {
    for (auto& l : libros) 
        if (l->getCodigoLibro() == codigo) return l;
    return nullptr;
}

void Biblioteca::registrarUsuario() {
    string nombre, documento, codigo;
    int edad;
    
    cout << "\n--- Registrar Usuario ---\n";
    cout << "Nombre: "; cin >> ws; getline(cin, nombre);
    cout << "Documento: "; cin >> documento;
    cout << "Edad: "; cin >> edad;
    cout << "Codigo: "; cin >> codigo;
    
    if (edad <= 0) cout << "Error: Edad debe ser > 0\n";
    else if (!soloNumeros(codigo)) cout << "Error: Codigo solo numeros\n";
    else {
        usuarios.push_back(new Usuario(nombre, documento, edad, codigo));
        cout << "Usuario registrado!\n";
    }
}