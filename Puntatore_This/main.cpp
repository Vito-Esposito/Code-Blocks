#include <iostream>

using namespace std;

class Cavia{
        private:
            int val;

        public:

            Cavia(int val= 0){
                this->val= val;
            }

            int get(){
                return this->val;
            }

            Cavia& set(int val){ // Per evitare di creare una copia dell'oggetto, con Cavia&, ritorni un riferimento, quindi non copi niente e puoi anche modificare l'oggetto originale direttamente.
                this->val= val;
                return *this;    // dereferenziando this, ovvero un puntatore all'oggetto, ottengo e ritorno l'oggetto stesso
            }


};



int main()
{
    Cavia prova;

    prova.set(2).set(3).set(11);

    cout << prova.get() << endl;

    return 0;
}
