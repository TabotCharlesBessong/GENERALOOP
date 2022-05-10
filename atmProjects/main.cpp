
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


/* Mini atm project atm
-> check balance 
-> cash withdraw
-> user details
-> update mobile No
*/

class atm {
  private:
    long int accountNo;
    string name;
    int PIN;
    double balance;
    string mobileNo;
  
  public:

    void setDate(long int accountNoP , string nameP , int PINP , double balanceP , string mobileNoP){
      accountNo = accountNoP;
      name = nameP;
      PIN = PINP;
      balance = balanceP;
      mobileNo = mobileNoP;
    }
    
    long int getAccountNo(){
      return accountNo;
    }

    string getName(){
      return name;
    }
    int getPin(){
      return PIN;
    }

    double getBalance(){
      return balance;
    }

    string getMobile(){
      return mobileNo;
    }

    void setMobile(string prevNo , string newNo){
      if(prevNo == mobileNo){
        mobileNo = newNo;
        cout << endl << "Successfully Updated mobile no"<<endl;
        _getch(); // this functions holds the screen until user press any key 
      }else{
        cout<<endl<<"Invalid !! old number"<<endl;
        _getch();
      }
    }

    void cashWithDraw(int amount){
      if(amount > 0 && amount < balance){
        balance -= amount;
        cout<<endl<<"Please collect your cash: "<<endl;
        cout<<endl<<"Available balance: "<<balance<<endl;
        _getch();
      }else{
        cout<<"Invalid value or insufficient balance"<<endl<<"Please try again later"<<endl;
      }
    }
};

int main(){
  int choice = 0, enterPIN;
  long int enterAccount;
  system("cls");

  atm user1;
  user1.setDate(1234567,"Charles",19655,75000,"650969553");

  do
  {
    /* code */
    system("cls");
    cout<<endl<<"***Welcome to ATM****"<<endl;
    cout<<endl<<"Enter your account number: "<<endl;
    cin>>enterAccount;

    cout<<endl<<"Enter PIN: "<<endl;
    cin>>enterPIN;

    if((enterAccount == user1.getAccountNo()) && (enterPIN == user1.getPin())){
      do
      {
        /* code */
        int amount = 0;
        string oldMobile , newMobile;
        system("cls");
        cout<<endl<<"***** Welcome to ATM ****"<<endl;
        cout<<endl<<"Select Options: "<<endl;
        cout<<endl<<"1. Check Balance: ";
        cout<<endl<<"2 withdraw cash: ";
        cout<<endl<<"3. Show User details";
        cout<<endl<<"4. Update Mobile Number: ";
        cout<<endl<<"5. Exit"<<endl;
        cin>>choice;

        switch(choice){
          case 1:
            cout<<endl<<"Your account balance is :"<<user1.getBalance();
            _getch();
            break;
          case 2:
            cout<<endl<<"Enter the amount you wish to withdraw";
            cin >> amount;
            user1.cashWithDraw(amount);
            break;
            
          case 3:
            cout<<endl<<"-> Your acount number is :"<<user1.getAccountNo();
            cout<<endl<<"-> Your Name is :"<<user1.getName();
            // cout<<endl<<"-> Your PIN is :"<<user1.getPin();
            cout<<endl<<"-> Your balance is :"<<user1.getBalance();
            cout<<endl<<"-> Your mobile number is :"<<user1.getMobile();
            _getch();
            break;

          case 4:
            cout<<endl<<"Enter old mobile number: ";
            cin >> oldMobile ; 

            cout<<endl<<"Enter new mobile number: ";
            cin >> newMobile;

            user1.setMobile(oldMobile,newMobile);
            break;

          case 5:
            exit(0);
        
          default:
            cout<<endl<<"Please enter valid data !!!! :";
            
        }
      } while (1);
      
    }else{
      cout<<endl<<"User details are invalid: ";
      _getch();
    }
  } while (1);

  return 0;
  
}
