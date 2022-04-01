

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
  public:
    int length;
    int widht;

    Rectangle(int l , int w){
      length = l;
      widht = w;
    }

    void display(){
      cout<<"This is the length of our rectangle: "<<length<<endl;
      cout<<"This is the widht of our rectangle: "<<widht<<endl;
    }

    void Area(){
      cout<<"This is the area of the rectangle: "<<widht * length <<endl;
    }
};

class Cuboid : public Rectangle{
  public:
    int height;

    void displayH(){
      cout<<height<<endl;
    }

    void Volume(){
      cout<<"The volume of this cuboid is : "<<height * length * widht << endl;
    }
};

int main(){
  Rectangle rect(20,40);
  Cuboid cub1;
  cub1.length = 23;
  cub1.widht = 18;
  cub1.height = 14;
  rect.Area();
  rect.display();
  cub1.display();
  cub1.displayH()
  cout<<"Today we will learn inheritance"<<endl;
}
