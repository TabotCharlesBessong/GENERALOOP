
#include <iostream>
using namespace std;

class Alpha {
  private:
    int a1;
  
  public:
    Alpha(int arg = 0){
      a1 = arg;
    }
    friend class Beta;
};

class Beta {
  private:
    int b1;
  public:
    Beta(int arg = 0){
      b1 = arg;
    }

    int Sum(){
      Alpha alpha(56);
      int sum = alpha.a1 + b1;
      cout<<"Sum: "<<sum<<endl;
    }
};

int main(){
  Beta beta(54);
  beta.Sum();
  cout<<endl<<"Friends class"<<endl;
}