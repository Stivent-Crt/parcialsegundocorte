#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>

/**
 * @brief 
 * @class Libro, representa un libro en la biblioteca
 * @param string titulo, autor
 * @param int codigoLibro
 * @param bool ddisponible
 */

class Libro{
    private:
        std::string titulo;
        std::string autor;
        int codigoLibro;
        bool disponible;
    
    public:

        /**
         * @brief Constructor de libro
         * 
         * @param titulo 
         * @param autor 
         * @param codigoLibro 
         * @param disponible 
         */
        Libro(std::string titulo, std::string autor, int codigoLibro, bool disponible);


        void mostrarInformacion();

        void prestarLibro();

        void devolverLibro();


}