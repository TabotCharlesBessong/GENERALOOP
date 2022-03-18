
// #include <iostream>
#include "cylinder.h"
// using namespace std;

Cylinder::Cylinder(double radParams , double heightParams){
            baseRadius = radParams;
            height = heightParams; 
}
Cylinder::double volume(){
      return PI * baseRadius * baseRadius * height ; 
}
// int main(){
// 
// }