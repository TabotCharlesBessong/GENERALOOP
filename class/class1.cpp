
#include <iostream>
using namespace std;

const double PI {3.1416};

class Cylinder {
  // Member variable 
  public :

    double baseRadius{};
    double height{};

  // Methode || functions 

  public :
    double volume(){
      return PI * baseRadius * baseRadius * height ; 
    }
};

int main(){
  Cylinder cylinder1;
  cylinder1.baseRadius = 10;
  cylinder1.height = 21;
  cout<<"Volume of our cylinder is : "<< cylinder1.volume()<<" m^3 "<<endl;
}