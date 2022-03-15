
#include <iostream>
using namespace std;

// This solves the momory problem brought forth by function overload 
// there are a mechanism that give us the blueprint for our functions 

template <typename T>
T maximum (T a , T b){
  return (a>b) ? a : b ;
}

// double max (double a , double b){
//   return (a>b) ? a : b ;
// }

// double max(int a, double b){
//     std::cout << "(int,double) overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// double max(double a, int b){
//     std::cout << "(double,int) overload called" << std::endl;
//     return (a>b)? a : b; 
// }

int main(){
  double x {23.87};
  double y {43.72};
  // The function you will call will excecute based on the type of the parameter and the data type of the function 
  double res = maximum(x,y);
  cout<<"The maximum number is: "<< res << endl;
}