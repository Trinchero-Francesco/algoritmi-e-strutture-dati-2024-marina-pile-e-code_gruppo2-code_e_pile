#include <iostream>
#include "ListaPuntatori.cpp"

template <typename T>
class Pila {
    private:
        Listapuntatori<T> elementi;
    public:
    // Aggiunge un elemento alla pila
    void push(T elem) {
        elementi.inslista(elem, 1);
    }

    // Rimuove e restituisce l'elemento in cima alla pila
    T pop() {
        if (isEmpty()){
            cout<<"la pila è vuota.";
        }
        T elem = elementi.leggilista(1);
        elementi.canclsita(1);
        return elem;
    }

    // Restituisce l'elemento in cima alla pila senza rimuoverlo
    T top() const {
        if (isEmpty()) {
            cout<<"la pila è vuota.";
        }
        return elementi.leggilista(1);
    }

    // Restituisce true se la pila è vuota, altrimenti false
    bool isEmpty() const {
        return elementi.listavuota();
    }

    // Restituisce il numero di elementi nella pila
    int size() const {
        return elementi.lunghezza();
    }
};
