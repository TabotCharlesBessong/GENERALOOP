

#include <iostream>
#include <string>
using namespace std;

class Base{
  public:

   // a virtual function is a function that exist but can not  be accessed 
    virtual void show(){
      cout<<"This is a base class"<<endl;
    }
};

class Der1 : public Base{
  public:
    void show(){
      cout<<"This is a derived class"<<endl;
    }
};

class Der2 : public Base{
  public:
    void show(){
      cout<<"This is a derived class 2"<<endl;
    }
};

int main(){

  Base *ptr;
  ptr = new Der1();
  ptr->show();

  ptr = new Der2();
  ptr->show();
  cout<<"\n\t\t\t\t\b\b\t"<<"Lets learn the Polumorphism"<<endl;
}
