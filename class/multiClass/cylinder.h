// #ifndef CYLINDER_H
// #define CYLINDER_H

class Cylinder {
  // Member variable 
  private :

    double baseRadius{};
    double height{};

  // Methode || functions 

  public :

  // constructor
    Cylinder(){
      baseRadius  ;
      height ;
    }
    Cylinder(double radParams , double heightParams){
      baseRadius = radParams;
      height = heightParams; 
    }
    double volume(){
      return PI * baseRadius * baseRadius * height ; 
    }

    double getBaseRadius(){
      return baseRadius;
    }

    double getHeight (){
      return height;
    }

    void setBaseRadius (double radParams){
      baseRadius = radParams;
    }

    void setHeight (double heightParams){
      height = heightParams;
    }
};

// #endif