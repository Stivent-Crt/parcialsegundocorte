#include "Usuario.h"
#include <cctype>

Usuario::Usuario(std::string nombre, std::string documento, int edad, std::string codigoUsuario)
    : Persona(nombre, documento, edad){
    
    // Validación de código
    bool soloNumeros = true;
    for (char c : codigoUsuario) {
        if (!isdigit(c)) {
            soloNumeros = false;
            break;
        }
    }

    if (soloNumeros && !codigoUsuario.empty()) {
        this->codigoUsuario = codigoUsuario;
    } else {
        this->codigoUsuario = "000000";
        std::cout << "Error: El código debe contener solo números. Se asignó 000000.\n";
    }
    
    this->cantidadLibrosPrestados = 0;

}

void Usuario::mostrarRol() {
    std::cout << "Rol: Usuario de Biblioteca" << std::endl;
}

void Usuario::mostrarInformacion() {
    Persona::mostrarInformacion();
    std::cout << "Código de Usuario: " << codigoUsuario << std::endl;
    std::cout << "Libros prestados: " << cantidadLibrosPrestados << std::endl;
    mostrarRol();
}