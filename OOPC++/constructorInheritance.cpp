
#include <iostream>
#include <string>
using namespace std;

class base{
  public:
    base(){
      cout<<"Default cnnstructor from base class: "<<endl;
    }

    base(int b){
      cout<<"Params Constructor from base class: "<<endl;
    }
};

class derived : public base{
  public:
    derived(){
      cout<<"Default construtor from derived class: "<<endl;
    }

    derived(int b) : base(b){
      cout<<"Params Constructor from derived class: "<<b<<endl;
    }
};

int main(){
  derived d(23);
}