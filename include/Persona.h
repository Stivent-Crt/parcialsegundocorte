#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

/**
 * @brief Clase base Persona que representa a cualquier persona en la biblioteca
 */
class Persona {                 //se me olvidó descargar el git, asi que me toca poner comentarios hasta q termine de descargarlo   
protected:                      //perdón profe es que formateé mi computadora y se me olvidó descargar el git, y los drivers
    std::string nombre;         //creamos las variables de la clase persona, que son el nombre, el documento y la edad
    std::string documento;      //estos son parametros protegidos, para que solo puedan ser accedidos por las clases derivadas    
    int edad;

public:
    /**
     * @brief Constructor de Persona
     * @param nombre Nombre de la persona
     * @param documento Número de documento
     * @param edad Edad de la persona (debe ser > 0)
     */
    Persona(std::string nombre, std::string documento, int edad);       //constructor de la clase persona, que recibe el nombre, el documento y la edad como parametros
    
    virtual ~Persona() {}
    
    /**
     * @brief Muestra el rol de la persona (método virtual puro)
     */
    virtual void mostrarRol() = 0;
    
    /**
     * @brief Muestra la información completa de la persona
     */
    virtual void mostrarInformacion();
    
    // Getters
    std::string getNombre() const { return nombre; }            //getters para obtener el nombre, el documento y la edad de la persona
    std::string getDocumento() const { return documento; }
    int getEdad() const { return edad; }
};

#endif
