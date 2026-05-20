#include "Persona.h" //se agregan las librerias necesarias para la clase persona, que son iostream y string
#include <iostream>
#include <string>

Persona::Persona(std::string nombre, std::string documento, int edad) {         //definición del constructor de la clase persona, que recibe el nombre, el documento y la edad como parametros
    this->nombre = nombre;
    this->documento = documento;
    
    // Validación de edad
    if (edad > 0) {             //se accede a los parametros de la clase persona utilizando el operador this, para asignar los valores recibidos en el constructor a las variables de la clase persona
        this->edad = edad;
    } else {
        this->edad = 18;         // edad por defecto
        std::cout << "Error: La edad debe ser mayor a 0. Se asignó 18 por defecto.\a\n";
    }
}

void Persona::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << std::endl;             //procedemos a mostrar la informacion del usuario, como el nombre, su documento y su edad.
    std::cout << "Documento: " << documento << std::endl;
    std::cout << "Edad: " << edad << std::endl;
}
