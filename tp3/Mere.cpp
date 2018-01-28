#include "Mere.hpp"


int Mere::count = 0;


Mere::Mere(){
  ++count;
  cout<<"Construction de Mere"<<endl;
}

Mere::Mere(string  inNom): nom(inNom){
  ++count;
  cout<<"Construction de Mere"<<endl;
}

Mere::~Mere(){
  cout<<"Destruction de Mere"<<endl;
}


int Mere::getCount(){
  return count;
}

string& Mere::getNom(){
  return nom;
}

void Mere::setCount(int inCount){
    count = inCount;
}

void Mere::setNom(string& inNom){
  nom = inNom;
}

void Mere::afficher(){
  cout<<"L'objet est de la classe Mere"<<endl;
}
