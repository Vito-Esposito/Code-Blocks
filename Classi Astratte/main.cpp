#include <iostream>
using namespace std;

// Classe astratta: non può essere istanziata direttamente
// Serve come "interfaccia" base per tutte le figure geometriche
class FiguraGeometrica {
public:
    // Metodo puramente virtuale (=0): deve essere implementato nelle classi derivate
    // Questo rende la classe "astratta"
    virtual double area() const = 0;      // Calcola l'area, non modifica l'oggetto (const)
    virtual double perimetro() const = 0; // Calcola il perimetro, non modifica l'oggetto (const)

    // Distruttore virtuale: buona pratica in classi base con ereditarietà
    virtual ~FiguraGeometrica() {}
};

// Classe concreta derivata da FiguraGeometrica
class Cerchio : public FiguraGeometrica {
private:
    double raggio;
public:
    Cerchio(double r) : raggio(r) {}

    // Implementazione del metodo area, con qualificatore const perché non modifica l'oggetto
    double area() const override {
        return 3.14159 * raggio * raggio;
    }

    // Implementazione del metodo perimetro, const per lo stesso motivo
    double perimetro() const override {
        return 2 * 3.14159 * raggio;
    }
};

// Un'altra classe concreta derivata
class Rettangolo : public FiguraGeometrica {
private:
    double base, altezza;
public:
    Rettangolo(double b, double h) : base(b), altezza(h) {}

    double area() const override {
        return base * altezza;
    }

    double perimetro() const override {
        return 2 * (base + altezza);
    }
};

int main() {
    // Uso di puntatori alla classe base per sfruttare il polimorfismo
    FiguraGeometrica* f1 = new Cerchio(5);        // Cerchio con raggio 5
    FiguraGeometrica* f2 = new Rettangolo(4, 6);  // Rettangolo 4x6

    // Chiamate ai metodi area e perimetro (metodi const)
    cout << "Cerchio - Area: " << f1->area() << ", Perimetro: " << f1->perimetro() << endl;
    cout << "Rettangolo - Area: " << f2->area() << ", Perimetro: " << f2->perimetro() << endl;

    // Pulizia della memoria
    delete f1;
    delete f2;

    return 0;
}

