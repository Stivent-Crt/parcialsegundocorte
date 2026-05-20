#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <string>
#include "Usuario.h"
#include "Bibliotecario.h"
#include "Libro.h"

class Biblioteca {
    private:
        std::vector<Usuario*> usuarios;
        std::vector<Bibliotecario*> bibliotecarios;
        std::vector<Libro*> libros;
    
        bool soloNumeros(std::string str);
        Usuario* buscarUsuario(std::string codigo);
        Libro* buscarLibro(std::string codigo);


    public:

        //Declaración de metodos
        Biblioteca();
        ~Biblioteca();
    
        void registrarUsuario();
        void registrarBibliotecario();
        void registrarLibro();
        void prestarLibro();
        void devolverLibro();
        void mostrarUsuarios();
        void mostrarLibros();
};

#endif
};