
#include <iostream>
#include <string>
using namespace std;

// redifining functionality of the base class in the derived class 

class Animal {
  public:
    string name;
    int age;
    float weight;
  
  void Run(){
    cout<<"All animals run"<<endl;
  }
};

class Lion : public Animal {
  public:
    void Run(){
      cout<<"The lion runs at 60mph"<<endl;
      Animal::Run();

    }
};

int main(){

  Lion leo;
  leo.Run();
  cout<<"\n\t\t\t"<<"Function Override"<<endl;
}