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

void Biblioteca::registrarBibliotecario() {
    string nombre, documento, codigo;
    int edad; double salario;
    
    cout << "\n--- Registrar Bibliotecario ---\n";
    cout << "Nombre: "; cin >> ws; getline(cin, nombre);
    cout << "Documento: "; cin >> documento;
    cout << "Edad: "; cin >> edad;
    cout << "Codigo: "; cin >> codigo;
    cout << "Salario: "; cin >> salario;
    
    if (edad <= 0) cout << "Error: Edad debe ser > 0\n";
    else if (!soloNumeros(codigo)) cout << "Error: Codigo solo numeros\n";
    else {
        bibliotecarios.push_back(new Bibliotecario(nombre, documento, edad, codigo, salario));
        cout << "Bibliotecario registrado!\n";
    }
}

void Biblioteca::registrarLibro() {
    string titulo, autor, codigo;
    
    cout << "\n--- Registrar Libro ---\n";
    cout << "Titulo: "; cin >> ws; getline(cin, titulo);
    cout << "Autor: "; cin >> ws; getline(cin, autor);
    cout << "Codigo: "; cin >> codigo;
    
    if (!soloNumeros(codigo)) cout << "Error: Codigo solo numeros\n";
    else {
        libros.push_back(new Libro(titulo, autor, codigo));
        cout << "Libro registrado!\n";
    }
}

void Biblioteca::prestarLibro() {
    string codUsuario, codLibro;
    
    cout << "\n--- Prestar Libro ---\n";
    cout << "Codigo usuario: "; cin >> codUsuario;
    cout << "Codigo libro: "; cin >> codLibro;
    
    Usuario* u = buscarUsuario(codUsuario);
    Libro* l = buscarLibro(codLibro);
    
    if (!u) cout << "Error: Usuario no existe\n";
    else if (!l) cout << "Error: Libro no existe\n";
    else if (l->prestarLibro()) u->incrementarLibrosPrestados();
}

void Biblioteca::devolverLibro() {
    string codLibro;
    
    cout << "\n--- Devolver Libro ---\n";
    cout << "Codigo libro: "; cin >> codLibro;
    
    Libro* l = buscarLibro(codLibro);
    if (!l) cout << "Error: Libro no existe\n";
    else {
        l->devolverLibro();
        for (auto& u : usuarios) {
            if (u->getCantidadLibrosPrestados() > 0) {
                u->decrementarLibrosPrestados();
                break;
            }
        }
    }
}

void Biblioteca::mostrarUsuarios() {
    cout << "\n=== USUARIOS ===\n";
    if (usuarios.empty()) cout << "No hay usuarios\n";
    else for (auto& u : usuarios) u->mostrarInformacion();
    
    cout << "\n=== BIBLIOTECARIOS ===\n";
    if (bibliotecarios.empty()) cout << "No hay bibliotecarios\n";
    else for (auto& b : bibliotecarios) b->mostrarInformacion();
}

void Biblioteca::mostrarLibros() {
    cout << "\n=== LIBROS ===\n";
    if (libros.empty()) cout << "No hay libros\n";
    else for (auto& l : libros) l->mostrarInformacion();
}