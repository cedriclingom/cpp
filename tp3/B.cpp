#include "B.hpp"
#include "A.hpp"




B::B()
{
  cout<<"Construction de B"<<endl;
}

B::B(int inJ): j(inJ)
{
  cout<<"Construction de B"<<endl;
}


B::~B()
{
  cout<<"Destruction de B"<<endl;
}


int B::getJ(){
  return j;
}

void B::setJ(int v){
  j=v;
}

void B::send(A * pA){
  pA->exec(1);
}

void B::exec(int v){
  setJ(v);
}
