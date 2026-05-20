#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"

class Usuario : public Persona {
private:
    std::string codigoUsuario;
    int cantidadLibrosPrestados;

public:
    Usuario(std::string nombre, std::string documento, int edad, std::string codigoUsuario);

    // Setters
    void setCodigoUsuario(std::string nuevoCodigo) {
        bool soloNumeros = true;
        for (char c : nuevoCodigo) {
            if (!isdigit(c)) {
                soloNumeros = false;
                break;
            }
        }
        if (soloNumeros && !nuevoCodigo.empty()) {
            codigoUsuario = nuevoCodigo;
        } else {
            std::cout << "Error: El código debe contener solo números\n";
        }
    }
    void setCantidadLibrosPrestados(int cantidad) { 
        cantidadLibrosPrestados = (cantidad >= 0) ? cantidad : 0; 
    }
    
    // Métodos para modificar la cantidad
    void incrementarLibrosPrestados() { cantidadLibrosPrestados++; }
    void decrementarLibrosPrestados() { 
        if (cantidadLibrosPrestados > 0) cantidadLibrosPrestados--;
    }
};

#endif