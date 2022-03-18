// #include <string_view>
// destructors 

class Dog{
  public :
    Dog() = default;
    Dog(string nameParams , string breadParams , int ageParams);

  private :
    string name;
    string bread;
    int* age(nullptr)
};

Dog::Dog(string nameParams , string breadParams , int ageParams){
  name = nameParams ;
  bread = breadParams;
  age = new int;
  *age = ageParams;

}