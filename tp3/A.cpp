#include "A.hpp"
#include "B.hpp"



A::A()
{
  cout<<"Construction de A"<<endl;
}

A::A(int inI): i(inI)
{
  cout<<"Construction de A"<<endl;
}


A::~A()
{
  cout<<"Destruction de A"<<endl;
}


int A::getI(){
  return i;
}

void A::setI(int v){
  i=v;
}


void A::send(B * pb){
  pb->exec(2);
}

void A::exec(int v){
  setI(v);
}
