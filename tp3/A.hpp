#ifndef _TP3_A_HPP_
#define _TP3_A_HPP_


#include <iostream>


using std::cout;
using std::endl;

class B;
class A{
  int i;

public:
  A();
  A(int);
  ~A();


  int getI();
  
  void setI(int);
  
  void send(B *);
  void exec(int);
};

#endif
