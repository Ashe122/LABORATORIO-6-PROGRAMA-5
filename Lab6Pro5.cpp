//Angelyn Judith Diaz Zeceña 5090-23-1407
//Programa 5 

#include <iostream>
#include <string>

using namespace std;

// Aqui se la definición de la clase Pelicula
class Pelicula {
private:
    // Aqui se utilizan atributos privados de la película
    string titulo;
    string director;
    int anoLanzamiento;

public:
    // Aqui se utiliza un Constructor que inicializa la película con información básica
    Pelicula() {
        titulo = "";
        director = "";
        anoLanzamiento = 0;
    }

    // Aqui se utilizan Métodos para establecer los datos de la película
    void setTitulo(const string& nuevoTitulo) {
        titulo = nuevoTitulo;
    }

    void setDirector(const string& nuevoDirector) {
        director = nuevoDirector;
    }

    void setAnoLanzamiento(int nuevoAno) {
        anoLanzamiento = nuevoAno;
    }

    //  Aqui tambien se utilizan Métodos para obtener los datos 
    string getTitulo() const {
        return titulo;
    }

    string getDirector() const {
        return director;
    }

    int getAnoLanzamiento() const {
        return anoLanzamiento;
    }

    // Método para mostrar la información de la película
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

    // Aqui se le Solicita al usuario que ingrese la información de la película
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

    // Aqui muestra la información de la película
    miPelicula.mostrarInformacion();

    return 0;
}
