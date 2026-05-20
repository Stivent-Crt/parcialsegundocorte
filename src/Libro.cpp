#include "Libro.h"
#include <cctype>

//Constructor
Libro::Libro(std::string titulo, std::string autor, std::string codigoLibro){
    this->titulo = titulo;
    this->autor = autor;
   
    //Validacion de código 
    bool soloNumeros = true;
    
    for (char c : codigoLibro){
        if(!isdigit(c)){
            soloNumeros = false;
            break;
        }
    }

    if(soloNumeros && !codigoLibro.empty()){
        this->codigoLibro = codigoLibro;
    } else {
        this->codigoLibro = "000000";
        std::cout < "Error solo debe contener números.\n";
    }

    this->disponible = true;

    void Libro::mostrarInformacion(){
        std::cout << "Titulo: " << titulo << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "Código: " << codigoLibro << std::endl;
        std::cout << "Estado: " << (disponible ? "Disponible": "Prestado") << std::endl;
    }
}