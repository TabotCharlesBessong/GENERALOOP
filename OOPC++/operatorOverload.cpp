
#include <iostream>
#include <string>
using namespace std;

class A{
  private:
    int weight;
  public:
    A(int x = 0 ){
      weight = x;
    }

    void printValue(){
      cout<<" This is your weight: "<<weight<<endl;
    }

    A operator+(A w){
      A temp;
      temp.weight = weight + w.weight;
      return temp;
    }
    void operator++(){
      ++weight;
    }
    void operator++(int){
      weight++;
    }
};

int main(){
  int a = 34 , b = 45 , c = 0;
  c = a + b;
  cout<<c<<endl;

  A per1(78);
  A per2(87);
  A junior(97);
  A total;
  total = per1 + per2 ;
  junior++;
  junior.printValue();
  // cout<<"Total: "<<total<<endl;
  total.printValue();
  cout<<"Hello my dearest friends"<<endl;
}
