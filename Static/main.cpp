#include <iostream>

class Contatore {
public:

    Contatore() {
        ++numeroOggetti;
    }

    static int getNumeroOggetti() {
        return numeroOggetti;
    }

private:
    // Attributo statico: condiviso da tutte le istanze
    static int numeroOggetti;
};

// Definizione dell'attributo statico fuori dalla classe
int Contatore::numeroOggetti = 0;

int main() {
    std::cout << "Oggetti creati: " << Contatore::getNumeroOggetti() << "\n";

    Contatore c1;
    Contatore c2;

    std::cout << "Oggetti creati: " << Contatore::getNumeroOggetti() << "\n";

    Contatore c3;

    std::cout << "Oggetti creati: " << c3.getNumeroOggetti() << "\n";

    return 0;
}

