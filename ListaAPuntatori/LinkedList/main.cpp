#include <iostream>

using namespace std;

// Una lista è una sequenza lineare di elementi detti "nodi", quindi una lista è una sequenza di nodi, ed ogni nodo è formato
// da due aree, una per il dato ed una per il puntatore che punterà al nodo successivo (classe nodo), mentre la
// lista (classe lista) è formata da due puntatori, uno per il primo elemento, elemento head/front,
// ed uno per l'ultimo elemento, il tail/back.

template <class T>
class Nodo{
            protected:
                    T dato;
                    Nodo<T>* next;
            public:
                    Nodo(T dato){
                        this->dato= dato;
                        next= nullptr;
                    }

                    ~Nodo(){}

                    void setDato(T dato){
                        this->dato= dato;
                    }

                    T getDato(){
                        return this->dato;
                    }

                    void setNext(Nodo<T> *nodosucc){
                        next= nodosucc;
                    }

                    Nodo<T> * getNext(){
                        return next;
                    }

                    bool isLast(){
                        return next==nullptr;
                    }
};

template <class T>
class List{
            protected:
                        Nodo<T>* head;
            public:
                    List(): head(nullptr){}

                    virtual ~List(){
                        Nodo<T> *current;

                        while(head!=nullptr){
                            current=head;
                            head=head->getNext();
                            delete current;
                        }
                    }

                    bool isEmpty(){
                        return head==nullptr;
                    }

                    virtual bool InsertAtFront(T item){
                        Nodo<T>* tmp;
                        tmp= new Nodo(item);

                        tmp->setNext(head);
                        head= tmp;
                    }

                    virtual bool RemoveFromFront(int &item){
                        if(isEmpty())
                            false;

                        Nodo<T>* tmp;
                        tmp= head;
                        head= head->getNext();
                        item= tmp->getDato();
                        delete tmp;
                        return true;
                    }

                    void printList() {
                        Nodo<T>* current = head;

                        while (current != nullptr) {
                            std::cout << current->getDato() << " -> ";
                            current = current->getNext();
                        }
                        std::cout << "nullptr" << std::endl;
                    }
};




int main()
{
    // creo nodo
    Nodo<int> n1(2);
    Nodo<int> n2(3);
    n1.setNext(&n2);

    cout << n1.getDato() << " " << n2.getDato() << " " << (n1.getNext()->getDato());

    return 0;
}
