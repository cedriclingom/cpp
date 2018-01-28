#ifndef _TP3_MERE_HPP_
#define _TP3_MERE_HPP_



#include <iostream>

using std::cout;
using std::endl;
using std::string;


class Mere{

  static int count;
  string nom;


public:
  Mere();
  Mere(string);
  ~Mere();

  static int getCount();
  string& getNom();

  static void setCount(int);
  void setNom(string&);
  void afficher();


};




#endif
