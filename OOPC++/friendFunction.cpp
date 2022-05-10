
#include <iostream>
using namespace std;

class Alpha {
  private:
    int a1;
  public:
    Alpha(int arg = 0){
      a1 = arg;
    }
    friend void Fun();
};

class Beta {
  private:
    int b1;
  public:
    Beta(int arg = 0){
      b1 = arg;
    }
    friend void Fun();
};

void Fun(){
  Alpha a(8);
  Beta b(5);

  int x = a.a1 + b.b1;

  cout<<"Sum: "<<x<<endl;
}

int main(){
  Fun();
  cout<<endl<<"Lets talk about the friends function"<<endl;
}
