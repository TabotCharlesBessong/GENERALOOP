
#include <iostream>
using namespace std;

class Person {
  private:
    int weight;
  
  public:
    Person(int w = 0){
      weight = w;
    }
    friend bool operator>(Person x , Person y);
    friend bool operator<(Person x , Person y);
};

bool operator< (Person x , Person y) {
  return x.weight < y.weight;
}

bool operator> (Person x , Person y) {
  return x.weight > y.weight;
}

int main(){
  int w1, w2 ; 
  cout<<"Enter the weight of Peter: "<<endl;
  cin>> w1 ; 
  cout<<"Enter the weight of Rocky: "<<endl;
  cin>> w2 ; 

  Person Peter(w1);
  Person Rocky(w2);

  if(Peter > Rocky) cout<<"Peter is heavier: "<<endl;
  else if (Rocky > Peter) cout<<"Rocky is heavier: "<<endl;
  else cout<<"They are both of the same weight: "<<endl;
  cout<<endl<<"Overload"<<endl;
}