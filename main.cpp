#include <iostream>
#include "Biblioteca.h"
using namespace std;

int main() {
    Biblioteca b;
    int op;
    
    do {
        cout << "\n1. Registrar usuario\n2. Registrar bibliotecario\n3. Registrar libro\n";
        cout << "4. Prestar libro\n5. Devolver libro\n6. Mostrar usuarios\n";
        cout << "7. Mostrar libros\n8. Salir\nOpcion: ";
        cin >> op;
        
        switch(op) {
            case 1: b.registrarUsuario(); break;
            case 2: b.registrarBibliotecario(); break;
            case 3: b.registrarLibro(); break;
            case 4: b.prestarLibro(); break;
            case 5: b.devolverLibro(); break;
            case 6: b.mostrarUsuarios(); break;
            case 7: b.mostrarLibros(); break;
            case 8: cout << "Adios!\n"; break;
            default: cout << "Opcion invalida\n";
        }
    } while(op != 8);
    
    return 0;
}