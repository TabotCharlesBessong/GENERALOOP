
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
    Cylinder(double radParams , double heightParams){
      baseRadius = radParams;
      height = heightParams; 
    }
    double volume(){
      return PI * baseRadius * baseRadius * height ; 
    }

    double getBaseRadius(){
      return baseRadius;
    }

    double getHeight (){
      return height;
    }

    void setBaseRadius (double radParams){
      baseRadius = radParams;
    }

    void setHeight (double heightParams){
      height = heightParams;
    }
};

int main (){
  Cylinder cylinder1(10,10);
  cout<<"Volume : "<<cylinder1.volume()<< endl;
  cylinder1.setBaseRadius(100);
  cout<<"Base Radius: "<<cylinder1.getBaseRadius()<<endl;
  cout<<"New Volume : "<<cylinder1.volume()<< endl;
}