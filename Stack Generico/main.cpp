#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    char scelta;
    int n, item;

    cout << "Inserisci size dello stack: ";
    cin >> n;

    Stack<int> stackg(n);

    cout << "(i)sFull -- i(s)Empty -- Po(p) -- Pus(h) -- Exi(t)" << endl;

    do{
        cout << "Inserisci scelta: ";
        cin >> scelta;

        switch(scelta){
            case 't': break;
            case 'i':
                        if(stackg.isFull())
                            cout << "Stack pieno." << endl;
                        else
                            cout << "Stack non pieno." << endl;
                        break;
            case 's':
                        if(stackg.isEmpty())
                            cout << "Stack vuoto." << endl;
                        else
                            cout << "Stack non vuoto." << endl;
                        break;
            case 'p':
                        cout << "Pop ell'ultimo elemento " << stackg.pop() << endl;
                        break;
            case 'h':
                        cout << "Inserisci elemento da pushare: ";
                        cin >> item;
                        stackg.push(item);
                        cout << "Fatto." << endl;
        }
    }while(scelta != 't');



    return 0;
}
