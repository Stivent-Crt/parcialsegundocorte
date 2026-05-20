#include "Bibliotecario.h"          //se incluyen las librerias necesarias para la clase bibliotecario
#include <cctype>

Bibliotecario::Bibliotecario(std::string nombre, std::string documento, int edad, 
                             std::string codigoEmpleado, double salario)
    : Persona(nombre, documento, edad) {
    
    // Validación de código (solo números)
    bool soloNumeros = true;
    for (char c : codigoEmpleado) {
        if (!isdigit(c)) {
            soloNumeros = false;
            break;
        }
    }
    
     if (soloNumeros && !codigoEmpleado.empty()) {              //se accede a los parametros y se hace la validación para el código del empleado y el salario
        this->codigoEmpleado = codigoEmpleado;                  
    } else {
        this->codigoEmpleado = "000000";
        std::cout << "Error: El código debe contener solo números. Se asignó 000000.\n";
    }
    
    this->salario = (salario > 0) ? salario : 1000000;
}
        void Bibliotecario::mostrarRol() {
    std::cout << "Rol: Bibliotecario" << std::endl;
}

void Bibliotecario::mostrarInformacion() {      //se muestra la información del bibliotecario, incluyendo su nombre, codigo y salario, y se llama al método mostrarRol para mostrar su rol
    Persona::mostrarInformacion();
    std::cout << "Código de Empleado: " << codigoEmpleado << std::endl;
    std::cout << "Salario: $" << salario << std::endl;
    mostrarRol();
   
}

