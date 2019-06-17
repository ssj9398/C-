#include <iostream>
using namespace std;

struct Account {
	char accID[20];		//계좌번호
	char secID[20];		//비밀번호
	char name[20];		//이름
	int balance;		//잔액
};

int main(void){
	Account man = { "123", "0000", "홍길동", 10000 };
	cout << "계좌번호 : " << man.accID << endl;
	cout << "계좌번호 : " << man.secID << endl;
	cout << "계좌번호 : " << man.name << endl;
	cout << "계좌번호 : " << man.balance << endl;

	return 0;
}