#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

/**
 * @brief Clase Libro que representa un libro en la biblioteca
 */
class Libro {
    private:
        std::string titulo;
        std::string autor;
        std::string codigoLibro;
        bool disponible;

public:
    /**
     * @brief Constructor de Libro
     * @param titulo Título del libro
     * @param autor Autor del libro
     * @param codigoLibro Código único del libro.
     */
    Libro(std::string titulo, std::string autor, std::string codigoLibro);
    
    /**
     * @brief Muestra la información del libro
     */
    void mostrarInformacion();
    
    /**
     * @brief Presta el libro si está disponible
     * @return true si se pudo prestar, false si no
     */
    bool prestarLibro();
    
    /**
     * @brief Devuelve el libro
     */
    void devolverLibro();
    
    // Getters
    std::string getTitulo() const { return titulo; }
    std::string getCodigoLibro() const { return codigoLibro; }
    bool isDisponible() const { return disponible; }

    // Setters
    void setTitulo(std::string nuevoTitulo) { titulo = nuevoTitulo; }
    void setAutor(std::string nuevoAutor) { autor = nuevoAutor; }
    void setCodigoLibro(std::string nuevoCodigo) { 
        // Validación: solo números
        bool soloNumeros = true;
        for (char c : nuevoCodigo) {
            if (!isdigit(c)) {
                soloNumeros = false;
                break;
            }
        }
        if (soloNumeros && !nuevoCodigo.empty()) {
            codigoLibro = nuevoCodigo;
        } else {
            std::cout << "Error: El código debe contener solo números\n";
        }
    }
    void setDisponible(bool estado) { disponible = estado; }
    
};

#endif