#include "Usuario.h"
#include <cctype>

Usuario::Usuario(std::string nombre, std::string documento, int edad, std::string codigoUsuario)
    : Persona(nombre, documento, edad){
        
    }