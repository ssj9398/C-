#include <iostream>
using namespace std;

struct Account {
	char accID[20];		//���¹�ȣ
	char secID[20];		//��й�ȣ
	char name[20];		//�̸�
	int balance;		//�ܾ�
};

int main(void){
	Account man = { "123", "0000", "ȫ�浿", 10000 };
	cout << "���¹�ȣ : " << man.accID << endl;
	cout << "���¹�ȣ : " << man.secID << endl;
	cout << "���¹�ȣ : " << man.name << endl;
	cout << "���¹�ȣ : " << man.balance << endl;

	return 0;
}