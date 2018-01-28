#ifndef _TP3_B_HPP_
#define _TP3_B_HPP_



#include <iostream>


using std::cout;
using std::endl;



class A;
class B{
  int j;


public:
   B();
  B(int);
  ~B();
  
  int getJ();
  
  void setJ(int);
  
  void send(A *);
  void exec(int);
  
};
#endif
