#include "Fille.hpp"



Fille::Fille(): Mere(){
  cout<<"Construction de Fille"<<endl;
}

Fille::Fille(string inNom):Mere(inNom){
  cout<<"Construction de Fille"<<endl;
}


Fille::~Fille(){
  cout<<"Destruction de Fille"<<endl;
}

void Fille::afficher(){
  cout<<"L'objet est de la classe Fille"<<endl;
}

