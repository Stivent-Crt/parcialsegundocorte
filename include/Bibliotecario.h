#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "Persona.h"  //se incluye la clase persona para que la clase bibliotecario pueda heredar de ella
#include <string>

/**
 * @brief Clase Bibliotecario que hereda de Persona
 */
class Bibliotecario : public Persona {
private:
    std::string codigoEmpleado;             //se crean las variables de la clase bibliotecario, que son el codigo del empleado y su salario
    double salario;

public:
    /**
     * @brief Constructor de Bibliotecario
     * @param nombre Nombre del bibliotecario
     * @param documento Documento del bibliotecario
     * @param edad Edad del bibliotecario
     * @param codigoEmpleado Código del empleado (solo números)
     * @param salario Salario del empleado
     */
    Bibliotecario(std::string nombre, std::string documento, int edad, 
                std::string codigoEmpleado, double salario);
    
    void mostrarRol() override;             //mostramos el rol del bibliotecario, que es "Bibliotecario" y su información
    void mostrarInformacion() override;
    
    std::string getCodigoEmpleado() const { return codigoEmpleado; }        //se obtiene el codigo del empleado y su salario
    double getSalario() const { return salario; }

};

#endif