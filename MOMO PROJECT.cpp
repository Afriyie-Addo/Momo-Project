#include <iostream>

using namespace std;

int main() {
		int balance = 1000;
	int pin = 0000;
	int numAttempts = 0;
	int numAttempts1 = 0;
	int check = 170; 
	while (true){
	  // Opening
	  int enteredcheck;
	  cout<<"Enter check:";
	  cin>>enteredcheck;
	  cout<<"OPENING ....  .... ....";
	  if (enteredcheck !=check){
	  	numAttempts1++;
	  	if (numAttempts1 >=1){
	  		cout<<"Error performing request.Unknown request."<<endl;
	  		return 0;
		  }
		  cout<<"Incorrect CODE.Please try again."<<endl;
		  continue;
	  }
	      numAttempts1 = 0;//Retry wrong attempt counter
	
	  //Authentication
	  int enteredpin;
	  cout<<"Enter PIN:";
	  cin>>enteredpin;
	  if (enteredpin !=pin){
	  	numAttempts++;
	  	if (numAttempts >=3){
	  	cout<<"Too many wrong attempts.Exiting program."<<endl;
	  return 0;
      }
	  cout<<"Incorrect PIN.Please try again."<<endl;
	  continue;
	}
	numAttempts = 0;//Reset wrong attempts counter
	
	//Menu
	cout<<"Select an option:"<<endl;
	cout<<"1. Rest PIN:"<<endl;
	cout<<"2. Check balance"<<endl;
	cout<<"3. Send money"<<endl;
	cout<<"4. Exit"<<endl;
	int option;
	cin>>option;
	
	//Option 1:Reset PIN
	if (option == 1){
		cout<<"Enter new PIN:";
		cin>>pin;
		cout<<"PIN reset successful."<<endl;
	}
	 
	//Option 2: Check balance
	else if (option ==2){
		cout<<"Current balance:"<<balance<<endl;
	} 
	
	//Option 3:Send money
	else if (option == 3){
		int amount;
		cout<<"Enter amount to send:";
		cin>>amount;
		if (amount>balance){
			cout<<"insufficient balance."<<endl;
		} else {
			balance-=amount;
			cout<<"Transaction successful.New balance:"<<balance<<endl;
			return 0;
		}
	}
	
	//Option 4:Exit
	else if (option == 4){
		cout<<"Exiting program."<<endl;
		return 0;
	}
	
	//Invalid option
	else{
		cout<<"Invalid option.Please try again."<<endl;
	}
    }
}
  


