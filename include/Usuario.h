#ifndef USUARIO_H
#define USUARIO_H

#include "Persona.h"

class Usuario : public Persona {
private:
    std::string codigoUsuario;
    int cantidadLibrosPrestados;

public:
    Usuario(std::string nombre, std::string documento, int edad, std::string codigoUsuario);