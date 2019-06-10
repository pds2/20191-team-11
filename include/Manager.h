#ifndef MANAGER
#define MANAGER

#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

template <class T> 
class Manager{
    public:
        Manager(){};
        Manager(string,map<int,T*>);
        ~Manager(){};
        string getNomeRelatorio();
        void setNomeRelatorio(string);
        map<int, T*>* getItens();
        T* getItem(int);
        void setItens(map<int,T*>);
        void listaItens();
        T* insereItem(int,T*);
        void removeItem(int);
        void geraRelatorio();
    private:
        string nome;
        map<int,T*> itens;

};

// template <class T>
// Manager<T>::Manager(){};

template <class T>
Manager<T>::Manager(string nome, map<int,T*> itens){
    this->nome = nome;
    this->itens = itens;
}

// template <class T>
// Manager<T>::~Manager(){}

template <class T>
string Manager<T>::getNomeRelatorio(){
    return this->nome;
}

template <class T>
void Manager<T>::setNomeRelatorio(string nome){
    this->nome = nome;
}

template <class T>
map<int,T*>* Manager<T>::getItens(){
    return &(this->itens);
}

template <class T>
T* Manager<T>::getItem(int value){
    if (this->itens[value] == 0) {
        throw std::invalid_argument("Nao encontrado ! Verifique a matricula/ registro digitado.");
    } else {
        return (this->itens[value]);
    }
    
}

template <class T>
void Manager<T>::setItens(map<int,T*> itens){
    this->itens = itens;
}

template <class T>
void Manager<T>::listaItens(){
    for (auto const& item : this->itens)
    {
        cout << left << setw(10) << item.first << " " << item.second->getNome() << endl ;
    }
}

template <class T>
T* Manager<T>::insereItem(int id,T* item){
    this->itens.insert(pair<int,T*> (id,item) );
    return (this->itens[id]);
}

template <class T>
void Manager<T>::removeItem(int id){
    this->itens.erase(id);
}

template <class T>
void Manager<T>::geraRelatorio(){
    cout << "===================================================" << endl;
    cout << "                "<< this->nome << endl;
    cout << "===================================================" << endl;
    this->listaItens();
    cout << "===================================================" << endl;
}

#endif