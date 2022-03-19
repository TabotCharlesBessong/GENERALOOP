
#include <iostream>
// #include <string_view>
using namespace std;

class Dog{
    public : 
        Dog() = default;
        Dog(string name_param, string breed_param, int  age_param);
        ~Dog();
      // setters

      void print_info(){
          cout<<"Dog ("<< this << "): [ name : " << name << " bread : " << breed << " age : "<< *p_age <<" ]"<< endl;
      }
      void setDogName(string name  ){
          this->name = name;
      }

    //   void setDogAge(int age){
    //       *(this->p_age) = age;
    //   }
    // void setDogBreed(string breed){
    //     this->breed = breed;
    // }
    private : 
        string name;
        string breed;
        int * p_age{nullptr};
};
Dog::Dog(string name_param, string breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    cout << "Dog constructor called for " << name <<" at "<<this<< std::endl;
}

Dog::~Dog(){
    delete p_age;
    cout << "Dog destructor called for : " << name << endl;
}

void some_func(){
    Dog* p_dog = new Dog("Fluffy","Shepherd",2);
    

    delete p_dog;// Causes for the destructor of Dog to be called
}



int main(){ 

    some_func();
    
    Dog dog1("Buggy","Cannine",7);
    dog1.print_info();
    dog1.setDogName("Elija");
    // dog1.setDogBreed("BoolDog");
    // dog1.setDogAge(4);
    dog1.print_info();

    cout << "Done!" <<endl;
    return 0;
}