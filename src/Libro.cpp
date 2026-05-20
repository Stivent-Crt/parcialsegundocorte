#include "../include/Libro.h"
#include <cctype>

Libro::Libro(std::string titulo, std::string autor, std::string codigoLibro) {
    this->titulo = titulo;
    this->autor = autor;
    
    // Validación de código (solo números)
    bool soloNumeros = true;
    for (char c : codigoLibro) {
        if (!isdigit(c)) {
            soloNumeros = false;
            break;
        }
    }
    
    if (soloNumeros && !codigoLibro.empty()) {
        this->codigoLibro = codigoLibro;
    } else {
        this->codigoLibro = "00000";
        std::cout << "Error: El código del libro debe contener solo números.\n";
    }
    
    this->disponible = true;
}

void Libro::mostrarInformacion() {
    std::cout << "Título: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "Código: " << codigoLibro << std::endl;
    std::cout << "Estado: " << (disponible ? "Disponible" : "Prestado") << std::endl;
}

bool Libro::prestarLibro() {
    if (disponible) {
        disponible = false;
        std::cout << " Libro prestado exitosamente" << std::endl;
        return true;
    } else {
        std::cout << " El libro no está disponible" << std::endl;
        return false;
    }
}

void Libro::devolverLibro() {
    if (!disponible) {
        disponible = true;
        std::cout << " Libro devuelto exitosamente" << std::endl;
    } else {
        std::cout << " El libro ya estaba disponible" << std::endl;
    }
}     
