
#include <iostream>
#include <string>
#include <string>
using namespace std;

class User {
  static int user_count;
  string status = "Gold";
  public:
  static int get_user_count(){
    return user_count;
  }

  string first_name;
  string last_name;
  string get_status(){
    return status;
  }
  void set_status(string status){
    if(status == "Gold" || status == "Silver" || status == "Bronze"){
      this->status = status;
    }else{
      this->status = "No status";
    }
  }
};