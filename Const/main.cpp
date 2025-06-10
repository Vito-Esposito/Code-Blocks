#include <iostream>
using namespace std;

// Passo in input alla funzione una variabile rw, tramite riferimento const, in modo che così la "proteggo" e può essere read-only

template <class T>
void client(const T& ro_data) {
    cout << "Dati read-only: " << ro_data << endl;
}

int main() {
    int rw_data= 10;
    client(rw_data);

    // Altre operazioni
    cout << "Dati read/write: " << rw_data << endl;
}


// Quindi, const viene usato per proteggere i dati, che siano già const o che diventino const con riferimenti


// E' buona prassi aggiungere const a tutti i metodi che non modificano alcun valore, in modo che un oggetto const MiaClasse a,
// possa utilizzare metodi const (i metodi const posso essere utilizzati anche da oggetti non const, oggetti const possono
// richiamre il costruttore

class MiaClasse {
public:

    MiaClasse(int valore= 0){
        this->valore= valore;
    }

    int getValore() const {  // metodo const
        return valore;
    }

    void setValore(int v) {
        valore = v;
    }

private:
    int valore;
};

// La lista di inizializzazione è obbligatoria per inizializzare membri const e riferimenti, che andrebbero SUBITO inizializzati
// dopo la dichiarazione, inoltre, per accdre/ritornare a membri const, servono metodi const

class MiaClasse2 {
public:
    const int c;   // membro const
    int& ref;      // riferimento a int

    // Costruttore: devi usare la lista di inizializzazione per entrambi
    MiaClasse2(int valore, int& r) : c(valore), ref(r) {
        // Non puoi assegnare 'c' o 'ref' qui dentro!
    }

    void stampa() const {
        std::cout << "c = " << c << ", ref = " << ref << std::endl;
    }
};

int main() {
    int x = 10;
    MiaClasse2 obj(5, x);
    obj.stampa();

    return 0;
}

