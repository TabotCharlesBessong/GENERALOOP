
#include <iostream>
#include <string>
using namespace std;


class Person{
  private:
    string name;
    int age;
    float height;
  
  public:
    // parametrised constructor
    Person(string nameP , int ageP , float heightP){
      name = nameP;
      age = ageP;
      height = heightP;
    }
    
    // non parametrised constructor 
    Person(){
      name = "Null";
      age = 0;
      height = 0.0f;
    }

    Person(Person &per1){
      name = per1.name;
      age = per1.age;
      height = per1.height;
    }

    // copy constructor : They help us crreate new object from the existing object

    void getData(){
      cout<<"\n"<<"Name: "<<name;
      cout<<"\n"<<"Age: "<<age;
      cout<<"\n"<<"Height: "<<height<<endl;
    }
};

class Phone {
  private:
    string name;
    float RAM;
    float Processor;
    float Battery;

  public:
    Phone(string nameP , float RAMP , float ProcessorP , float BatteryP){
      name = nameP;
      RAM = RAMP;
      Processor = ProcessorP;
      Battery = BatteryP;
    }

    Phone(Phone &tecno){
      name = tecno.name;
      RAM = tecno.RAM;
      Processor = tecno.Processor;
      Battery = tecno.Battery;
    }

    void getProperties(){
      cout<<"\n";
      cout<<"The phone's name is: "<<name<<endl;
      cout<<"The phone's RAM is: "<<RAM<<endl;
      cout<<"The phone's Proccesor speed is: "<<Processor<<endl;
      cout<<"The phone's Battery life span is: "<<Battery<<endl;
    }
};
// constructors in cpp oop

int main(){
  Person per , per1("Charles Bessong Tabot",19,1.73),per3(per1);
  per.getData();
  per1.getData();
  per3.getData();

  cout<<endl;
  Phone tecno("Spark 8",4,2.67,8090.76),itel(tecno);
  tecno.getProperties();
  itel.getProperties();
  cout<<"Hello world"<<endl;
}
