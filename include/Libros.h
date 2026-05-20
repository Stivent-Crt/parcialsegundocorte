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


        
        //Getters
        std::string getTitulo() const;

        std::string getAutor() const;

        int getCodigoLibro() const;

        bool getDisponible() const;

        //Setters
        void setTitulo(std::string titulo);

        void setAutor(std::string autor);

        void setCodigoLibro(int codigoLibro);

        void setDisponible(bool disponible);

        //Metodos

        /**
         * @brief Muestra la informacion del libro
         * 
         */
        void mostrarInformacion();

        /**
         * @brief Presta el libro si esta disponible
         * @return retorna verdadero si lo esta de lo constrario falso
         */
        void prestarLibro();

        /**
         * @brief Devuelve el libro
         * 
         */
        void devolverLibro();

        /**
         * @brief Getters y Setters de los atributos
         * 
         */

};

#endif