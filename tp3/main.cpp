/**
#include "A.hpp"
#include "B.hpp"
**/

#include "Mere.hpp"
#include "Fille.hpp"


int main(int, char**)
{
  /** Partie 1
  A a;
  B b;
  a.send(&b);
  b.send(&a);
  cout<<"i: " << a.getI()<<endl;
  cout<<"j: " << b.getJ()<<endl;
  return 0;
  **/

  /** Partie 2.1
  Mere m;
  Fille f;
  cout<<"Le nombre de meres est = "<<m.getCount()<<endl;
  cout<<"Le nombre de meres est = "<<f.getCount()<<endl;
  **/

  /** Partie 2.2
  Mere m("Sara");
  Fille f("Sara");
  cout<<"Le nom de la mère est: "<< m.getNom()<<endl;
  cout<<"Le nom de la mère est à partir de f: "<< f.getNom()<<endl;
  m.afficher();
  f.afficher();
  Mere  *pm = new Mere("mere_dyn");
  Fille *pf = new Fille("fille_dyn");
  Mere  *pp = new Fille("fille vue comme mere");
  pm->afficher();
  pf->afficher();
  pp->afficher();
  cout<<"Le nombre de meres est = "<<m.getCount()<<endl;
  delete pp;
  delete pf;
  delete pm;
  **/
}
