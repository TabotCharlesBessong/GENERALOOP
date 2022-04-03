
#include <iostream>
using namespace std;

class Base {
  public:
    virtual ~Base(){
      cout<<"The base class destructor"<<endl;
    }
};

class Derived : public Base {
  public:
    ~Derived(){
      cout<<"Derived class destructor"<<endl;
    }
};

int main(){

  Base *ptr = new Derived;
  delete ptr;
  cout<<endl<<"Destructors but virtual ones"<<endl;
}