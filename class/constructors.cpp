
#include <iostream>
using namespace std;

const double PI {3.1416};

class Cylinder {
  // Member variable 
  private :

    double baseRadius{};
    double height{};

  // Methode || functions 

  public :

  // constructor
    Cylinder(){
      baseRadius  ;
      height ;
    }
    Cylinder(double radParams , double heiParams){
      baseRadius = radParams;
      height = heiParams; 
    }
    double volume(){
      return PI * baseRadius * baseRadius * height ; 
    }
};

int main (){
  Cylinder cylinder1(21,2); // object
  cout << "Volume of the cylinder: "<< cylinder1.volume()<<endl;
}