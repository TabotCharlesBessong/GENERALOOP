

#include <iostream>
using namespace std;


class Dog{
  public:
    string m_name;

};

struct Cat
{
  /* data */
  public :
    string m_name;
};

struct Point{
  double x;
  double y;
};

void printPoint(const Point& point){
  cout<<" Point [ x: "<<point.x<<" , y : "<< point.y << " ]"<<endl;
}


int main (){

  Dog dog1;
  Cat cat1;

  dog1.m_name = "Buggy";
  cout<<dog1.m_name<<endl;
  cat1.m_name = "Miol";
  cout<<cat1.m_name<<endl;

  Point point1;
  point1.x = 24;
  point1.y = 102.8;
  printPoint(point1);

  return 0;

}
