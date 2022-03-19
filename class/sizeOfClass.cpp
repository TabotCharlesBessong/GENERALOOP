

#include <iostream>
using namespace std;

class Dog{
  public:
    Dog() = default;
  private:
    size_t legCount;// 8
    size_t armCount;// 8
    int* pAge;// 8
};

int main (){
  Dog dog1;
  
  cout<<"Size of size t: "<< sizeof(size_t) << endl;
  // size of an object depend on the member variable variales and note the fxns in it 
  cout<<"Size of int pointer: "<<sizeof(int*)<< endl;
  cout<<"size of dog: " <<sizeof(Dog)<<endl; 
}