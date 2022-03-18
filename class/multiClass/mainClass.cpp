#include <iostream>
#include "constant.h"
#include "cylinder.h"
using namespace std;





int main (){
  Cylinder cylinder1(10,10);
  cout<<"Volume : "<<cylinder1.volume()<< endl;
  cylinder1.setBaseRadius(100);
  cout<<"Base Radius: "<<cylinder1.getBaseRadius()<<endl;
  cout<<"New Volume : "<<cylinder1.volume()<< endl;

  // Managing object with pointers and the new keyword
  Cylinder* pCylinder1 = &cylinder1;
  cout<<"Volume: "<<pCylinder1->volume() <<endl;

  // The new operator 
  Cylinder* pCylinder2 = new Cylinder(12,32); // heap object
  cout<<"Volume of cylinder 2 : "<<pCylinder2->volume() <<endl;
  cout<<"Height of cylinder 2 : "<<pCylinder2->getHeight() <<endl;
  // we will need to release the memory after use

  delete pCylinder2;
}