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
}