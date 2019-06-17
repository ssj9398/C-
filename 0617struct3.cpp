#include <iostream>
using namespace std;

struct Account{
	char accID[20];
	char secID[20];
	char name[20];
	int balance;

	void Deposit(int money){
		balance = balance + money;
	}
	void Withdraw(int money){
		balance = balance - money;
	}
};

int main(){
	Account man = { "123", "1234", "È«±æµ¿", 1000 };

	man.Deposit(100);
	cout << "ÀÜ¾× :" << man.balance << endl;

	man.Withdraw(1000);
	cout << "ÀÜ¾× :" << man.balance << endl;

}