#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Coda {
private:
    Listapuntatori<T> elementi; // Lista per memorizzare gli elementi della coda

public:
    // Aggiunge un elemento alla fine della coda
    void enqueue(T elem) {
        // Inserisce l'elemento alla posizione successiva alla lunghezza corrente (alla fine)
        elementi.inslista(elem, elementi.lunghezza() + 1);
    }

    // Rimuove e restituisce l'elemento in testa alla coda
    T dequeue() {
        if (isEmpty()) {
            std::cout << "La coda è vuota." << std::endl;
            return T(); // Restituisce un oggetto di default
        }
        // Legge il primo elemento
        T elem = elementi.leggilista(1);
        // Rimuove il primo elemento
        elementi.canclista(1);
        return elem;
    }

    // Restituisce l'elemento in testa alla coda senza rimuoverlo
    T front() const {
        if (isEmpty()) {
            std::cout << "La coda è vuota." << std::endl;
            return T(); // Restituisce un oggetto di default
        }
        // Restituisce il primo elemento
        return elementi.leggilista(1);
    }

    // Restituisce true se la coda è vuota, altrimenti false
    bool isEmpty() const {
        return elementi.listavuota();
    }

    // Restituisce il numero di elementi nella coda
    int size() const {
        return elementi.lunghezza();
    }
};
