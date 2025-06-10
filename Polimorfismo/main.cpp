#include <iostream>

// ===== CLASSE BASE =====
class Animale {
public:
    virtual void verso() const {
        std::cout << "Verso generico di animale.\n";
    }

    virtual ~Animale() {}  // Necessario per distruzione corretta tramite base
};

// ===== CLASSI DERIVATE =====

class Cane : public Animale {
public:
    void verso() const override {
        std::cout << "Il cane abbaia.\n";
    }

    void scodinzola() const {
        std::cout << "Il cane scodinzola.\n";
    }
};

class Gatto : public Animale {
public:
    void verso() const override {
        std::cout << "Il gatto miagola.\n";
    }

    void faiFusa() const {
        std::cout << "Il gatto fa le fusa.\n";
    }
};

class Pappagallo : public Animale {
public:
    void verso() const override {
        std::cout << "Il pappagallo parla.\n";
    }

    void vola() const {
        std::cout << "Il pappagallo vola.\n";
    }
};

// ===== FUNZIONE POLIMORFA =====

void faiVerso(Animale* a) {
    a->verso();  // Esegue la versione giusta in base all'oggetto reale
}

// ===== MAIN =====

int main() {
    // Creo oggetti specifici ma li tratto come 'Animale'
    Animale* a1 = new Cane();
    Animale* a2 = new Gatto();
    Animale* a3 = new Pappagallo();

    // Uso polimorfismo: non importa il tipo esatto
    faiVerso(a1);  // Il cane abbaia.
    faiVerso(a2);  // Il gatto miagola.
    faiVerso(a3);  // Il pappagallo parla.

    // Libero la memoria
    delete a1;
    delete a2;
    delete a3;

    return 0;
}

// Posso anche dichiarare semplicemente il puntatore di tipo classe base, e poi tramite classe_base* p= &classe_derivata,
// utilizzare il polimorfismo attraverso p->metodo.
//Il polimorfismo, permette di utilizzare metodi override da metodi virtual delle varie classi derivate, attraverso un solo puntatore di classe base.
