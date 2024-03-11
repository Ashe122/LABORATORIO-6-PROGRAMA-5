//Angelyn Judith Diaz Zece�a 5090-23-1407
//Programa 5 

#include <iostream>
#include <string>

using namespace std;

// Aqui se la definici�n de la clase Pelicula
class Pelicula {
private:
    // Aqui se utilizan atributos privados de la pel�cula
    string titulo;
    string director;
    int anoLanzamiento;

public:
    // Aqui se utiliza un Constructor que inicializa la pel�cula con informaci�n b�sica
    Pelicula() {
        titulo = "";
        director = "";
        anoLanzamiento = 0;
    }

    // Aqui se utilizan M�todos para establecer los datos de la pel�cula
    void setTitulo(const string& nuevoTitulo) {
        titulo = nuevoTitulo;
    }

    void setDirector(const string& nuevoDirector) {
        director = nuevoDirector;
    }

    void setAnoLanzamiento(int nuevoAno) {
        anoLanzamiento = nuevoAno;
    }

    //  Aqui tambien se utilizan M�todos para obtener los datos 
    string getTitulo() const {
        return titulo;
    }

    string getDirector() const {
        return director;
    }

    int getAnoLanzamiento() const {
        return anoLanzamiento;
    }

    // M�todo para mostrar la informaci�n de la pel�cula
    void mostrarInformacion() const {
        cout << "Informacion de la Pelicula:" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Director: " << director << endl;
        cout << "Ano de Lanzamiento: " << anoLanzamiento << endl;
    }
};

int main() {
    cout << "-----Hola personita, Bienvenido al registro de peliculas.-----" << endl;

    
    Pelicula miPelicula;

    // Aqui se le Solicita al usuario que ingrese la informaci�n de la pel�cula
    string titulo, director;
    int anoLanzamiento;

    cout << "Ingrese el titulo de la pelicula: ";
    getline(cin, titulo);
    miPelicula.setTitulo(titulo);

    cout << "Ingrese el director de la pelicula: ";
    getline(cin, director);
    miPelicula.setDirector(director);

    cout << "Ingrese el ano de lanzamiento de la pelicula: ";
    cin >> anoLanzamiento;
    miPelicula.setAnoLanzamiento(anoLanzamiento);

    // Aqui muestra la informaci�n de la pel�cula
    miPelicula.mostrarInformacion();

    return 0;
}
