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
}