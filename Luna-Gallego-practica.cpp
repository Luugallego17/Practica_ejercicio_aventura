#include <iostream>
#include <string>
using namespace std;

int main() {
    string personaje = "jeyjey";
    int puerta = 0;
    int puntaje = 100;

    cout << "Bienvenido a la busqueda del tesoro " << personaje << "!" << endl;
    cout << "Cada decisión que tomes restara energia, comienzas con 100 puntos, trata de perder los menores puntos posibles." << endl;

    do {
        cout << "Bienvenido a la puerta mágica." << endl;
        cout << "Escoge un número del 1 al 10: " << endl;
        cout << "Respuesta: ";
        cin >> puerta;

        if (puerta != 1) {
            puntaje -= 20;
            cout << "El número no es correcto. Te quedan " << puntaje << " puntos." << endl;
        }

        if (puntaje <= 0) {
            cout << "Game over, has perdido todos tus puntos!" << endl;
            return 0;
        }

    } while (puerta != 1); 

    cout << "¡Acertaste el número! Puedes pasar a la siguiente etapa de la aventura con " << puntaje << " puntos." << endl;

    int opcion = 0;

    cout << "\nHas entrado a la Habitación 2: El Monstruo Guardián." << endl;
    cout << "Un monstruo aparece y tienes dos opciones: " << endl;
    cout << "1. Luchar contra el monstruo" << endl;
    cout << "2. Huir " << endl;
    cout << "Elige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Te enfrentas al monstruo, pero pierdes 40 puntos de energía en la batalla" << endl;
            puntaje -= 40;
            if (puntaje <= 0) {
                cout << "El monstruo te ha derrotado. Game over!" << endl;
                return 0;
            } else {
                cout << "¡Has vencido al monstruo! Te quedan " << puntaje << " puntos." << endl;
            }
            break;

        case 2:
            cout << "Huyes del monstruo, pero pierdes 20 puntos de energía" << endl;
            puntaje -= 20;
            if (puntaje <= 0) {
                cout << "Perdiste toda tu energía mientras huías. Game over!" << endl;
                return 0;
            } else {
                cout << "Escapaste del monstruo. Te quedan " << puntaje << " puntos." << endl;
            }
            break;

        default:
            cout << "Opción no válida. Pierdes automáticamente 10 puntos." << endl;
            puntaje -= 10;
            if (puntaje <= 0) {
                cout << "Perdiste toda tu energía. Game over!" << endl;
                return 0;
            } else {
                cout << "Te quedan " << puntaje << " puntos." << endl;
            }
            break;
    }

    int caminos = 3; 
    cout << "\nHas entrado al Laberinto, y tienes que pasar por tres caminos." << endl;

    for (int i = 1; i <= caminos; i++) {
        int eleccion;
        cout << "Estás en el camino " << i << ". Elige una direccion: " << endl;
        cout << "1. Izquierda" << endl;
        cout << "2. Derecha" << endl;
        cout << "Elige tu dirección: ";
        cin >> eleccion;

        if (eleccion == 1) {
            cout << "Elegiste ir por la izquierda, pero pierdes 10 puntos por el cansancio." << endl;
            puntaje -= 10;
        } else if (eleccion == 2) {
            cout << "Elegiste ir por la derecha, pero hay muchos obstaculos pierdes 20 puntos!" << endl;
            puntaje -= 20;
        } else {
            cout << "Opción no válida. Pierdes 5 puntos." << endl;
            puntaje -= 5;
        }

        if (puntaje <= 0) {
            cout << "Has perdido toda tu energía en el laberinto. Game over!" << endl;
            return 0;
        }
    }

    cout << "¡Has salido del laberinto con éxito! Te quedan " << puntaje << " puntos." << endl;

    cout << "\nHas encontrado una sala secreta: El Tesoro Perdido." << endl;
    cout << "¡Aquí está el tesoro! Pero sólo puedes tomarlo si tienes suficiente energia" << endl;
    
    if (puntaje > 10) {
        cout << "¡Felicidades! Has conseguido el tesoro con " << puntaje << " puntos." << endl;
        cout << "La aventura termina con éxito." << endl;
    } else {
        cout << "No tienes suficiente energía para tomar el tesoro, la aventura ha fracasado" << endl;
    }

    return 0;
}