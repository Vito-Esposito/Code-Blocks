#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    int size, item;
    char scelta;

    cout << "Inserisci size dello stack: " << endl;
    cin >> size;

    Stack stack(size);

    cout << "IS_(E)MPTY - IS_(F)ULL - (P)OP - P(U)SH - E(X)IT" << endl;

    do{
        cout << "Inserisci scelta: ";
        cin >> scelta;

        switch(scelta){
            case 'X':
                        break;
            case 'E':
                        if(stack.isEmpty())
                            cout << "Lo stack è vuoto!" << endl;
                        else
                            cout << "Lo stack non è vuoto." << endl;
                        break;
            case 'F':
                        if(stack.isFull())
                            cout << "Lo stack è pieno" << endl;
                        else
                            cout << "Lo stack non è pieno" << endl;
                        break;
            case 'P':
                        cout << "Pop dell'ultimo elemento, " << stack.pop() << endl;
                        break;
            case 'U':
                        cout << "Inserisci elemento da pushare nello stack: ";
                        cin >> item;
                        stack.push(item);
                        break;
        }
    }while(scelta != 'X');

    return 0;
}
