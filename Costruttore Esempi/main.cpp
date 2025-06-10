#include <iostream>

using namespace std;

// Classe esempio Punto2D

class Punto2D{
    public:
            int x;
            int y;

    Punto2D(){              // Costruttore di default
        this->x= 0;
        this->y= 0;
    }

    Punto2D(int x, int y){  // Costruttore
        this->x= x;
        this->y= y;
    }
};

// Classe Punto2D con costruttore ottimizzato,, che funge sia da costruttore che costruttore di default,
// con argomenti con valori di default

class Punto2D_2{
    public:
            int x;
            int y;

    Punto2D_2(int x= 0, int y= 0){
        this->x= x;
        this->y= y;
    }
};



int main()
{

    return 0;
}
